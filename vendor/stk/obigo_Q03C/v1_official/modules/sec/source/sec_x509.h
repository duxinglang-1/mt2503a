/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*
 * Copyright (C) Obigo AB, 2002-2006.
 * All rights reserved.
 *
 * This software is covered by the license agreement between
 * the end user and Obigo AB, and may be 
 * used and copied only in accordance with the terms of the 
 * said agreement.
 *
 * Obigo AB assumes no responsibility or 
 * liability for any errors or inaccuracies in this software, 
 * or any consequential, incidental or indirect damage arising
 * out of the use of the software.
 *
 */















/*******************************************************************************
 *
 * Filename:
 * ---------
 * sec_x509.h
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 * 
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/

#ifndef _sec_x509_h
#define _sec_x509_h

#ifndef _sec_lib_h
#include "sec_lib.h"
#endif
#ifndef _msf_def_h
#include "msf_def.h"
#endif

#define SEC_ASN_1_BOOLEAN                 1
#define	SEC_ASN_1_INTEGER                 2
#define SEC_ASN_1_BIT_STRING              3
#define SEC_ASN_1_OCTET_STRING            4
#define SEC_ASN_1_NULL                    5
#define SEC_ASN_1_OBJECT_IDENTIFIER       6
#define SEC_ASN_1_UTF8STRING							12
#define SEC_ASN_1_SEQUENCE_OF             16
#define SEC_ASN_1_SEQUENCE                16
#define SEC_ASN_1_SET                     17
#define SEC_ASN_1_SET_OF                  17
#define SEC_ASN_1_NUMERICSTRING						18
#define SEC_ASN_1_PRINTTABLESTRING        19
#define SEC_ASN_1_T61STRING               20
#define SEC_ASN_1_EMAIL_IA5STRING         22
#define SEC_ASN_1_UTCTIME                 23
#define SEC_ASN_1_UNIVERSALSTRING         28
#define SEC_ASN_1_BMPSTRING               30
#define SEC_ASN_1_CONSTRUCTED_SEQUENCE    48
#define SEC_ASN_1_CONSTRUCTED_SEQUENCE_OF 49
#define SEC_ASN_1_UNKNOWN                 100

#define SEC_ASN_1_IMPLICIT_TAG1						129
#define SEC_ASN_1_IMPLICIT_TAG2						130


#define SEC_ASN_1_EXPLICIT_TAG			  160
#define SEC_ASN_1_IMPLICIT_TAG			  163




#define SEC_CERT_USAGE_SERVER_AUTH  1
#define SEC_CERT_USAGE_CLIENT_AUTH  2
#define SEC_CERT_USAGE_CA           3
#define SEC_CERT_USAGE_ROOT         4


int 
SEC_x509GetAndCheckLength(const unsigned char *x509cert, 
                          MSF_UINT16 *certLen, MSF_UINT16 *jumpStep);

void 
SEC_x509DERtoSize(unsigned char *cert, MSF_UINT16 *tmpStep, MSF_UINT16 *size);

int 
SEC_x509GetTBSCert(const unsigned char *x509cert,
                   unsigned char *tbsCert, MSF_UINT16 *tbsCertLen);

int 
SEC_x509Parse(const unsigned char *x509cert, MSF_UINT16 *certLength,
              sec_certificate_t *cert);
								  
int 
SEC_x509GetNbrIssuerStrings(const unsigned char *issuer, MSF_UINT16 issuerLen, 
                            MSF_UINT8 *nbrIssuerStrings);

int 
SEC_x509GetIssuerAttributes(MSF_UINT8 modId, const unsigned char *issuer, 
                            MSF_UINT16 issuerLen, 
                            MSF_UINT8 *nbrIssuerAttributes,                                
                            sec_name_attribute_t *issuerA);

int 
SEC_x509GetIssuerString(const unsigned char *x509cert, 
                        unsigned char **issuerString, MSF_UINT16 *issuerStringLen, 
                        MSF_UINT16 *jumpStep);

int 
SEC_x509GetAndCheckTBSCertLength(const unsigned char *tBSCert, MSF_UINT16 *tBSCertLen, 
                                 MSF_UINT16 certLen, MSF_UINT16 *jumpStep);

int 
SEC_x509ParseTBHTrustedCAInfo(const unsigned char *tBHTrusedCAInfo, 
															MSF_INT16 *characterSet, 
                              void **displayName, int *displayNameLen,
                              unsigned char **cert, MSF_UINT16 *certLen);

int 
SEC_x509ParseSignedTrustedCAInfo(const unsigned char *signedTrustedCAInfo, 
																 MSF_INT16 *characterSet, 
                                 void **displayName, int *displayNameLen,
                                 unsigned char **trustedCAcert, 
                                 MSF_UINT16 *trustedCAcertLen,
																 unsigned char **signerCert, MSF_UINT16 *signerCertLen,
																 MSF_UINT8 *signatureAlg, unsigned char **signature, 
                                 MSF_UINT16 *signatureLen);

int 
SEC_x509ParseCertResponse(const unsigned char *certResponse, 
													MSF_INT16 *characterSet, 
                          void **displayName, int *displayNameLen,
													unsigned char **ca_keyhash, unsigned char **subject_keyhash,
													unsigned char **cert, MSF_UINT16 *certLen);

int 
SEC_x509GetRSAModAndExp(const unsigned char *publicKeyVal,
                        unsigned char **rsa_modulus, MSF_UINT16 *modLen, 
                        unsigned char **rsa_exponent, MSF_UINT16 *expLen);

int 
SEC_x509GetDSAParams(const unsigned char *publicKeyVal,
                     unsigned char **publicKey, MSF_UINT16 *publicKeyLen,
                     unsigned char **dsaParams, MSF_UINT16 *dsaParamsLen);

int 
SEC_x509GetExtension(unsigned char *extensions, int *extnId, int *critical,
                     unsigned char **extnValue, MSF_UINT16 *extnValueLen,
                     MSF_UINT16 *jumpStep);

int 
SEC_x509ExtnKeyUsage(const unsigned char *extnValue, 
                     MSF_UINT8 *keyUsageBit0To7, 
                     MSF_UINT8 *keyUsageBit8To15); 

int 
SEC_x509ExtnExtKeyUsage(const unsigned char *extnValue, 
                        int *anyExtendedKeyUsage, int *serverAuth, 
                        int *clientAuth, int *codeSigning, int *emailProtection, 
                        int *timeStamping, int *OCSPSigning);
 
int 
SEC_x509ExtnAuthorityKeyIdentifier(const unsigned char *extnValue, 
                                   unsigned char** keyIdentifier,
                                   MSF_UINT16* keyIdentifierLen);

int 
SEC_x509ExtnSubjectKeyIdentifier(const unsigned char *extnValue, 
                                 unsigned char** keyIdentifier,
                                 MSF_UINT16* keyIdentifierLen);


int 
SEC_x509ExtnSubjectAltName(const unsigned char *extnValue, 
                           unsigned char **dNSName,MSF_UINT16 *dNSNameLen,
                           unsigned char **iPAddress,MSF_UINT16 *iPAddressLen);

int 
SEC_x509ExtnBasicConstraints(const unsigned char *extnValue, int *cA,
                             int *hasPathLenConstraint,
                             MSF_UINT8 *pathLenConstraint);


#endif
