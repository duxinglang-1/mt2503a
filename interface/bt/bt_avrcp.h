#ifndef _BT_AVRCP_H_
#define _BT_AVRCP_H_

#include "kal_general_types.h"
#include "stack_config.h"
#include "bt_avrcp_struct.h"
// activate
void bt_avrcp_send_activate_req( module_type src_mod_id, kal_uint8 local_role );
void bt_avrcp_send_activate_cnf( module_type dst_mod_id, kal_uint16 result );

// deactivate
void bt_avrcp_send_deactivate_req( module_type src_mod_id);
void bt_avrcp_send_deactivate_cnf( module_type dst_mod_id, kal_uint16 result );

// connect
void bt_avrcp_send_connect_req( module_type src_mod_id, bt_avrcp_dev_addr_struct* device_addr, kal_uint8 local_role );
#ifdef __BT_AVRCP_V13__
void bt_avrcp_send_version_ind( module_type dst_mod_id, kal_uint16 result, bt_avrcp_dev_addr_struct* device_addr, kal_uint16 version, kal_uint16 Feature);
#endif
void bt_avrcp_send_connect_cnf( module_type dst_mod_id, kal_uint16 result, bt_avrcp_dev_addr_struct* device_addr, kal_uint8 connect_id);
void bt_avrcp_send_connect_ind( module_type dst_mod_id, bt_avrcp_dev_addr_struct* device_addr, kal_uint8 connect_id );

// disconnect
void bt_avrcp_send_disconnect_req( module_type src_mod_id, kal_uint8 connect_id);
void bt_avrcp_send_disconnect_cnf( module_type dst_mod_id, kal_uint16 result, kal_uint8 connect_id );
void bt_avrcp_send_disconnect_ind( module_type dst_mod_id, kal_uint8 connect_id);

//command frame
void bt_avrcp_send_cmd_frame_req( module_type src_mod_id, kal_uint8 connect_id, kal_uint8 seq_id, kal_uint8 c_type, kal_uint8 subunit_type, kal_uint8 subunit_id, kal_uint16 data_len, kal_uint8* frame_data);
void bt_avrcp_send_cmd_frame_cnf( module_type dst_mod_id, kal_uint8 connect_id, kal_uint8 seq_id, kal_uint8 c_type, kal_uint8	subunit_type, kal_uint8 subunit_id,	kal_uint16 data_len, kal_uint8 *frame_data);
void bt_avrcp_send_cmd_frame_ind( module_type dst_mod_id, kal_uint8 connect_id, kal_uint8 seq_id, kal_uint16 profile_id,	kal_uint8	c_type,	kal_uint8	subunit_type, kal_uint8 subunit_id,	kal_uint16 data_len, kal_uint8 *frame_data);
void bt_avrcp_send_cmd_frame_ind_res( module_type src_mod_id, kal_uint8 connect_id, kal_uint8 seq_id, kal_uint16 profile_id,kal_uint8 c_type, kal_uint8 subunit_type, kal_uint8 subunit_id, kal_uint16 data_len, kal_uint8* frame_data);

#ifdef __BT_AVRCP_V13__
void bt_avrcp_send_command_ind(module_type dst_mod_id, kal_uint16 msg_id, kal_uint8 *data, kal_uint16 data_size);
#endif
//util


#endif /* #ifndef _BT_AVRCP_H_ */

