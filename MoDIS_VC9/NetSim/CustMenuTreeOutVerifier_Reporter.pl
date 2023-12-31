#!/usr/local/bin/perl -w

#******************************************************************************
#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2007
#
#  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
#  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
#  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
#  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
#  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
#  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
#  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
#  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
#  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
#  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
#  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
#  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
#
#  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
#  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
#  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
#  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
#  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
#
#  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
#  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
#  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
#  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
#  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
#
#******************************************************************************

#******************************************************************************
#
# Filename:
# ---------
# CustMenuTreeOutVerifier_Reporter.pl
#
# Project:
# --------
# MAUI
#
# Description:
# ------------
# Parsing the result(CustMenuTreeOutResult.txt) generated by CustMenuTreeOutVerifier.exe.
# Notify related owner(file owner & specific owner) when getting fail.
#
# Author:
# -------
# ChunJen Cheng (mtk90073)
#
#==============================================================================
#             HISTORY
# Below this line, this part is controlled by version control system. DO NOT MODIFY!!
#------------------------------------------------------------------------------
# $Log$
# 2008/07/05
#   initial
#
# 2008/07/07
#   add codebase information in notify
#
# 2008/07/11
#   add project information in notify
#
# 2008/07/23
#   modify codebase, project name, modem type and verno information in notify
#
# 2008/07/29
#   make the information of current user can be set from INI file
#
# 2008/07/31
#   change owner.txt path
#
# 2008/08/18
#   add mount VOB command, make find owner can be supported on LSF
#
# 2008/08/19
#   modify email notification will be launched only for specific owner
#
#------------------------------------------------------------------------------
# Upper this line, this part is controlled by version control system. DO NOT MODIFY!!
#==============================================================================
#******************************************************************************

#warn "
#==============================================================================
# [Program]    CustMenuTreeOutVerifier_Reporter.pl
# [Version]    V1.7
# [Date]       2008-08-19
# [Author]     ChunJen.Cheng\@mediatek.com
# [Copyright]  Copyright (C) 2008 MediaTek Incorporation. All Rights Reserved.
#==============================================================================
#";

#******************************************************************************
# Included Modules
#******************************************************************************
use strict;
use Net::SMTP;
use File::Basename;

#*----------------------------------------------------------------------------*
#* Global Variables                                                           *
#*----------------------------------------------------------------------------*
our $curr_usr                  = lc(getlogin()) or die "can't get your login name\n$!\n";
our $verno                     = $ARGV[0] or die "Cannot get VERNO";
our $mmidir                    = $ARGV[1] or die "Cannot get MMIDIR";
our $mmi_base                  = $ARGV[2] or die "Cannot get MMI_BASE";
our $project                   = $ARGV[3] or die "Cannot get Project Name";
our $modem                     = $ARGV[4] or die "Cannot get Modem Type";
our $ComputerName              = $ENV{"COMPUTERNAME"};
our $basedir                   = dirname($0);
our $make_ini                  = "make.ini";
our $owner_txt                 = "$mmidir\\Customer\\CustResource\\owner.txt";
our $CustMenuTreeOutResult_txt = "$basedir\\CustMenuTreeOutResult.txt";
our $CustMenuTreeOutErrmsg_txt = "$basedir\\CustMenuTreeOutErrmsg.txt";
our $BM_conf_ini               = "\\\\glbfs14\\WCP\\sw_releases\\3rd_party\\Scripts\\BM_conf.ini";
our $notify_list               = '';
our $cwd                       = '';
our $full_path                 = '';

#*----------------------------------------------------------------------------*
#* Code Body                                                                  *
#*----------------------------------------------------------------------------*
# Parsing the network path name
chomp($cwd = `cd`);

if ($ENV{"atMoDIS_LSF_remote"})
{
  $full_path = $ENV{"atMoDIS_LSF_remote"};
}
else
{
  my $device_name = substr($cwd, 0, 2);
  my $path_name = substr($cwd, 2);
  my @net_use_result = `net use $device_name 2>&1`;
  ($full_path) = ($net_use_result[1] =~ /\s+(\\\\.*)\s*$/);
  $full_path = ($full_path)?($full_path.$path_name):$cwd;
}

# Parsing CustMenuTreeOutResult.txt
open (FILE_HANDLE, "<$CustMenuTreeOutResult_txt") or die "cannot open $CustMenuTreeOutResult_txt\n";
while (<FILE_HANDLE>)
{
  chomp;
  
  if (/^Pass$/i)
  {
    next;
  }
  elsif (/^Fail \?$/i)
  {
    mail("Parsing fail :: owner.txt line# can't match");
  }
  elsif ((/^Fail\s+$/i) && (!-e $owner_txt))
  {
    mail("Parsing fail :: without owner.txt");
  }
  elsif ((/^Fail\s+$/i) && (-e $owner_txt))
  {
    mail("Parsing fail @ IDLE_SCREEN_MENU_ID");
  }
  elsif (/^Fail (\S+)$/i)
  {
    my $file_owner = &get_cc_file_owner($1);
    $notify_list = "$file_owner," if ($file_owner);
    mail("Parsing fail @ $1");
  }
  
  last;
}
close FILE_HANDLE;


#*----------------------------------------------------------------------------*
#* Subroutine                                                                 *
#*----------------------------------------------------------------------------*
sub get_cc_file_owner
{
  my $file_name  = $_[0];
  my $file_owner = '';
  my $file_path;
  my $branch;
  my $Branch_stream_name;
  
  if ($verno =~ /MAUI\.(|[^\s\.]+)\.{0,1}(W\d\d\.\d\d)\.(MP_\d+|MP|OF_\d+|OF|SP\d+_\d+|SP_d+|SP\d+|SP)\.{0,1}(V\d+|)/i)
  {
    $branch = $1;
    $branch = "MAUI" unless ($branch);
    $Branch_stream_name = "MAUI.$branch.$2.$3.$4";
  }
  elsif ($verno =~ /MAUI\.(|[^\s\.]+)\.{0,1}(W[^\s]+)/i)
  {
    $branch = $1;
    $branch = "MAUI" unless ($branch);
    $Branch_stream_name = "$branch.$2";
  }
  
  system("cleartool mount \\MAUI_SW");
  system("cleartool mount \\MAUI_SW_PMT");
  system("cleartool startview ${Branch_stream_name}_int");
  
  $file_path = "M:\\${Branch_stream_name}_int\\MAUI_SW\\mcu\\$mmidir\\Customer\\CustResource\\" . uc($mmi_base) . "\\Res_MMI\\$file_name";
  
  if (-e $file_path)
  {
    $file_owner = `cleartool describe -fmt \"%u\" $file_path`;
    
    if ($file_owner =~ /ccadmin/i)
    {
      if (`cleartool describe $file_path \|find \"Merge\"` =~ /Merge <- ([^\s]+)/i)
      {
        $file_owner = `cleartool describe -fmt \"%u\" $1`;
      }
    }
  }
  
  return $file_owner;
}


#******************************************************************************
# FUNCTION
#  iniToHash
# DESCRIPTION
#  This function will parse ini file and return its value in a HASH table
# PARAMETERS
#  The input in file path
# RETURNS
#  HASH
# RETURN VALUE LIST
#  N/A
#
#usage:
#      my %hash=iniToHash('/tmp/myini.ini');
#      print $hash{'TITLE'}->{'Name'},"\n";
#
#******************************************************************************
sub iniToHash
{
  open(MYINI, $_[0]);
  my %hash;
  my $hashref;

#*----------------------------------------------------------------------------*
#* Code Body                                                                  *
#*----------------------------------------------------------------------------*    
  while (<MYINI>)
  {
    next if ((/^\s*$/) || (/^\s*#/));
    
    if (/^\s*\[(.+)\]/)
    {
      $hashref = $hash{$1} ||= {};
    }
    elsif (/^\s*(\S+)\s*=\s*(.+)\s*$/)
    {
      $hashref->{$1} = $2;
    }
    elsif (/^\s*(\S+)\s*\+=\s*(.+)\s*$/)
    {
      $hashref->{$1} = $hashref->{$1} . " $2";
    }
  }
    
  close MYINI;
  return %hash;
}


sub mail
{ 
  my $subject = $_[0];
  my $content = '';
  
  if (-e $BM_conf_ini)
  {
    my %BM_conf = iniToHash($BM_conf_ini);
    
    if ($BM_conf{'CustMenuTreeOutVerifier_Reporter'}->{'LAUNCH_LIST'})
    {
    	exit if ($BM_conf{'CustMenuTreeOutVerifier_Reporter'}->{'LAUNCH_LIST'} !~ /$curr_usr/i);
    }
    
    $BM_conf{'CustMenuTreeOutVerifier_Reporter'}->{'EMAIL_NOTIFY_LIST'} =~ s/\[curr_usr\]/${curr_usr}/gi;
    $notify_list .= ($BM_conf{'CustMenuTreeOutVerifier_Reporter'}->{'EMAIL_NOTIFY_LIST'});
  }
  else
  {
    $notify_list .= $curr_usr;
  }
  
  if (-e $CustMenuTreeOutErrmsg_txt)
  {
    open FILE, "<$CustMenuTreeOutErrmsg_txt" or die "cannot open $CustMenuTreeOutErrmsg_txt\n";
    undef $/;
    $content = <FILE>;
    close FILE;
  }
  
  my $smtp = Net::SMTP->new('mtksmtp2.mtk.com.tw');
  $smtp->mail($curr_usr);
  map { $smtp->recipient($_); } split(/,/, $notify_list);
  $smtp->data();
  $smtp->datasend("Subject: [CustMenuTreeOutVerifier_Reporter] $subject\n");
  $smtp->datasend("To: $notify_list\n\n");
  $smtp->datasend("PROJECT: $project\n");
  $smtp->datasend("MODEM: $modem\n");
  $smtp->datasend("EXEC_MACHINE: $ComputerName\n");
  $smtp->datasend("EXEC_PATH: $cwd\n");
  $smtp->datasend("CODEBASE: $full_path\n");
  $smtp->datasend("VERNO: $verno\n");
  $smtp->datasend("\n");
  $smtp->datasend("Error Message:\n");
  $smtp->datasend("=========================================================================\n");
  $smtp->datasend("$content\n");
  $smtp->datasend("=========================================================================\n\n");
  $smtp->quit;
}
