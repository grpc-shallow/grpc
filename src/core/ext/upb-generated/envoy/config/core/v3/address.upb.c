/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/core/v3/address.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/config/core/v3/address.upb.h"
#include "envoy/config/core/v3/socket_option.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Field envoy_config_core_v3_Pipe__fields[2] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {2, UPB_SIZE(0, 0), 0, 0, 13, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_Pipe_msginit = {
  NULL,
  &envoy_config_core_v3_Pipe__fields[0],
  UPB_SIZE(16, 32), 2, upb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Field envoy_config_core_v3_EnvoyInternalAddress__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_EnvoyInternalAddress_msginit = {
  NULL,
  &envoy_config_core_v3_EnvoyInternalAddress__fields[0],
  UPB_SIZE(16, 32), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Field envoy_config_core_v3_SocketAddress__fields[6] = {
  {1, UPB_SIZE(0, 0), 0, 0, 5, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 8), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {3, UPB_SIZE(24, 40), UPB_SIZE(-33, -57), 0, 13, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {4, UPB_SIZE(24, 40), UPB_SIZE(-33, -57), 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {5, UPB_SIZE(16, 24), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {6, UPB_SIZE(4, 4), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_SocketAddress_msginit = {
  NULL,
  &envoy_config_core_v3_SocketAddress__fields[0],
  UPB_SIZE(40, 64), 6, upb_ExtMode_NonExtendable, 6, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_core_v3_TcpKeepalive_submsgs[1] = {
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_MiniTable_Field envoy_config_core_v3_TcpKeepalive__fields[3] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 2, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24), 3, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_TcpKeepalive_msginit = {
  &envoy_config_core_v3_TcpKeepalive_submsgs[0],
  &envoy_config_core_v3_TcpKeepalive__fields[0],
  UPB_SIZE(16, 32), 3, upb_ExtMode_NonExtendable, 3, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_core_v3_BindConfig_submsgs[3] = {
  {.submsg = &envoy_config_core_v3_SocketAddress_msginit},
  {.submsg = &envoy_config_core_v3_SocketOption_msginit},
  {.submsg = &google_protobuf_BoolValue_msginit},
};

static const upb_MiniTable_Field envoy_config_core_v3_BindConfig__fields[3] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 2, 2, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24), 0, 1, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_BindConfig_msginit = {
  &envoy_config_core_v3_BindConfig_submsgs[0],
  &envoy_config_core_v3_BindConfig__fields[0],
  UPB_SIZE(16, 32), 3, upb_ExtMode_NonExtendable, 3, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_core_v3_Address_submsgs[3] = {
  {.submsg = &envoy_config_core_v3_EnvoyInternalAddress_msginit},
  {.submsg = &envoy_config_core_v3_Pipe_msginit},
  {.submsg = &envoy_config_core_v3_SocketAddress_msginit},
};

static const upb_MiniTable_Field envoy_config_core_v3_Address__fields[3] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 2, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {3, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_Address_msginit = {
  &envoy_config_core_v3_Address_submsgs[0],
  &envoy_config_core_v3_Address__fields[0],
  UPB_SIZE(8, 16), 3, upb_ExtMode_NonExtendable, 3, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_core_v3_CidrRange_submsgs[1] = {
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_MiniTable_Field envoy_config_core_v3_CidrRange__fields[2] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_CidrRange_msginit = {
  &envoy_config_core_v3_CidrRange_submsgs[0],
  &envoy_config_core_v3_CidrRange__fields[0],
  UPB_SIZE(16, 32), 2, upb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable *messages_layout[7] = {
  &envoy_config_core_v3_Pipe_msginit,
  &envoy_config_core_v3_EnvoyInternalAddress_msginit,
  &envoy_config_core_v3_SocketAddress_msginit,
  &envoy_config_core_v3_TcpKeepalive_msginit,
  &envoy_config_core_v3_BindConfig_msginit,
  &envoy_config_core_v3_Address_msginit,
  &envoy_config_core_v3_CidrRange_msginit,
};

const upb_MiniTable_File envoy_config_core_v3_address_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  7,
  0,
  0,
};

#include "upb/port_undef.inc"

