def get_output_data_file_name(res_type_name):
    return '../../Customer/CustResource/Cust%sDataHW.h' % res_type_name

def get_output_res_file_name(res_type_name):
    return '../../Customer/CustResource/Cust%sRes.c' % res_type_name

def get_output_map_file_name(res_type_name):
    return '../../Customer/CustResource/Cust%sMap.c' % res_type_name

def convert_to_symbol_name(str):
    str = str.replace('.', '_').replace('-', '_').replace(' ', '_').replace('\\', '_')
    return str.upper()

def output_data_hw_header(output_file):
    header = '''
#if ( !defined (__MTK_TARGET__) )
    #define __align(x)
#endif
'''
    output_file.write(header)

def output_res_header(res_type_name, output_file):
    header = '''
// generated by resgen process
#include "CustDataRes.h"
#include "Cust%sDataHW.h"
#include "CustResDef.h"

const S8 Cust%sPath[]=CUST_%s_PATH;
''' % (res_type_name, res_type_name, res_type_name.upper() )
    output_file.write(header)

def output_map_header(output_file):
    header = '''
// generated by resgen process
#include "CustDataRes.h"

'''
    output_file.write(header)

def output_res(res_type_name, symbol_name_list):
    output_res_file = file(get_output_res_file_name(res_type_name), 'w');

    output_res_header(res_type_name, output_res_file);

    output_res_file.write('const unsigned short  CurrMax%sNum=%d;\n' %
            (res_type_name, len(symbol_name_list) ) )
    output_res_file.write('const CUSTOM_%s nCust%sNames[]={\n' %
            (res_type_name.upper(), res_type_name))

    for symbol in symbol_name_list:
        text = '(U8*)&%s,\n' % symbol
        output_res_file.write(text)

    output_res_file.write('};\n\n')

def output_map(res_type_name, res_id_list, symbol_map, symbol_name_meta_data):
    output_map_file = file(get_output_map_file_name(res_type_name), 'w');

    output_map_header(output_map_file);

    output_map_file.write('unsigned short CurrMax%sId=%d;\n' %
            (res_type_name, len(res_id_list) ) )
    output_map_file.write('const CUSTOM_%s_MAP %sIdMap[]={\n' %
            (res_type_name.upper(), res_type_name) )

    for id in res_id_list:
        symbol_name = symbol_map[id]
        location = symbol_name_meta_data[symbol_name][1]
        output_map_file.write('\t{%d},\n' % location)

    output_map_file.write('};\n\n')

    output_search_map(res_type_name, res_id_list, output_map_file)

def output_search_map(res_type_name, res_id_list, output_map_file):
    last_id = -100
    continue_count = 0
    count = 0
    search_map = []

    for id in res_id_list + [-1]:
        if id == last_id + 1:
            continue_count += 1
        else:
            begin = last_id - continue_count
            end = last_id
            map_to = count - continue_count - 1
            search_map.append( (begin, end, map_to) )
            continue_count = 0
        last_id = id
        count += 1

    search_map = search_map[1:]

    output_map_file.write('const unsigned short CurrMaxSearch%sId=%d;\n' %
            (res_type_name, len(search_map) ) )

    output_map_file.write('const CUSTOM_%s_SEARCH_MAP %sIdSearchMap[]={\n' %
            (res_type_name.upper(), res_type_name) )

    for entry in search_map:
        begin, end, map_to = entry
        text = '\t{%d,%d,%d},\n' % (begin, end, map_to)
        output_map_file.write(text)

    output_map_file.write('};\n\n')

def output_file_data_text(filename, output_file):
    data_file = file(filename, 'rb')
    data = data_file.read()
    count = 0
    for byte in data:
        if count % 16 == 0:
            output_file.write('\t')
        byte_text = '0x%02X, ' % ord(byte)
        output_file.write(byte_text)
        count += 1
        if count % 16 == 0:
            output_file.write('\n')

    if count % 16 != 0:
        output_file.write('\n')

def binary_to_text(data):
    text = ''
    for byte in data:
        text += '0x%02X, ' % ord(byte)
    return text

def output_repeat_list(repeat_list):
    if not repeat_list:
        return
    log_file = file('./debug/repeat_id_list_2.log', 'w')
    for entry in repeat_list:
        id, type = entry
        log_file.write('%d %s\n' % (id, type) )

def output_fail_list(fail_file_list):
    log_file = file("./debug/fail_2.txt", "w")
    for filename in fail_file_list:
        log_file.write('%s\n' % filename )

