/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/cluster/v3/cluster.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/config/cluster/v3/cluster.upb.h"
#include "envoy/config/cluster/v3/circuit_breaker.upb.h"
#include "envoy/config/cluster/v3/filter.upb.h"
#include "envoy/config/cluster/v3/outlier_detection.upb.h"
#include "envoy/config/core/v3/address.upb.h"
#include "envoy/config/core/v3/base.upb.h"
#include "envoy/config/core/v3/config_source.upb.h"
#include "envoy/config/core/v3/extension.upb.h"
#include "envoy/config/core/v3/health_check.upb.h"
#include "envoy/config/core/v3/protocol.upb.h"
#include "envoy/config/core/v3/resolver.upb.h"
#include "envoy/config/endpoint/v3/endpoint.upb.h"
#include "envoy/type/v3/percent.upb.h"
#include "google/protobuf/any.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/protobuf/struct.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "xds/core/v3/collection_entry.upb.h"
#include "envoy/annotations/deprecation.upb.h"
#include "udpa/annotations/migrate.upb.h"
#include "udpa/annotations/security.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_config_cluster_v3_ClusterCollection_submsgs[1] = {
  {.submsg = &xds_core_v3_CollectionEntry_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_ClusterCollection__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_ClusterCollection_msginit = {
  &envoy_config_cluster_v3_ClusterCollection_submsgs[0],
  &envoy_config_cluster_v3_ClusterCollection__fields[0],
  UPB_SIZE(8, 16), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_Cluster_submsgs[35] = {
  {.submsg = &envoy_config_cluster_v3_CircuitBreakers_msginit},
  {.submsg = &envoy_config_cluster_v3_Cluster_CommonLbConfig_msginit},
  {.submsg = &envoy_config_cluster_v3_Cluster_CustomClusterType_msginit},
  {.submsg = &envoy_config_cluster_v3_Cluster_EdsClusterConfig_msginit},
  {.submsg = &envoy_config_cluster_v3_Cluster_LbSubsetConfig_msginit},
  {.submsg = &envoy_config_cluster_v3_Cluster_LeastRequestLbConfig_msginit},
  {.submsg = &envoy_config_cluster_v3_Cluster_MaglevLbConfig_msginit},
  {.submsg = &envoy_config_cluster_v3_Cluster_OriginalDstLbConfig_msginit},
  {.submsg = &envoy_config_cluster_v3_Cluster_PreconnectPolicy_msginit},
  {.submsg = &envoy_config_cluster_v3_Cluster_RefreshRate_msginit},
  {.submsg = &envoy_config_cluster_v3_Cluster_RingHashLbConfig_msginit},
  {.submsg = &envoy_config_cluster_v3_Cluster_RoundRobinLbConfig_msginit},
  {.submsg = &envoy_config_cluster_v3_Cluster_TransportSocketMatch_msginit},
  {.submsg = &envoy_config_cluster_v3_Cluster_TypedExtensionProtocolOptionsEntry_msginit},
  {.submsg = &envoy_config_cluster_v3_Filter_msginit},
  {.submsg = &envoy_config_cluster_v3_LoadBalancingPolicy_msginit},
  {.submsg = &envoy_config_cluster_v3_OutlierDetection_msginit},
  {.submsg = &envoy_config_cluster_v3_TrackClusterStats_msginit},
  {.submsg = &envoy_config_cluster_v3_UpstreamConnectionOptions_msginit},
  {.submsg = &envoy_config_core_v3_Address_msginit},
  {.submsg = &envoy_config_core_v3_BindConfig_msginit},
  {.submsg = &envoy_config_core_v3_ConfigSource_msginit},
  {.submsg = &envoy_config_core_v3_DnsResolutionConfig_msginit},
  {.submsg = &envoy_config_core_v3_HealthCheck_msginit},
  {.submsg = &envoy_config_core_v3_Http1ProtocolOptions_msginit},
  {.submsg = &envoy_config_core_v3_Http2ProtocolOptions_msginit},
  {.submsg = &envoy_config_core_v3_HttpProtocolOptions_msginit},
  {.submsg = &envoy_config_core_v3_Metadata_msginit},
  {.submsg = &envoy_config_core_v3_TransportSocket_msginit},
  {.submsg = &envoy_config_core_v3_TypedExtensionConfig_msginit},
  {.submsg = &envoy_config_core_v3_UpstreamHttpProtocolOptions_msginit},
  {.submsg = &envoy_config_endpoint_v3_ClusterLoadAssignment_msginit},
  {.submsg = &google_protobuf_BoolValue_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster__fields[51] = {
  {1, UPB_SIZE(24, 24), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {2, UPB_SIZE(172, 320), UPB_SIZE(-177, -329), 0, 5, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {3, UPB_SIZE(40, 56), 1, 3, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {4, UPB_SIZE(44, 64), 2, 33, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {5, UPB_SIZE(48, 72), 3, 34, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {6, UPB_SIZE(4, 4), 0, 0, 5, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {8, UPB_SIZE(152, 280), 0, 23, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {9, UPB_SIZE(52, 80), 4, 34, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {10, UPB_SIZE(56, 88), 5, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {13, UPB_SIZE(60, 96), 6, 24, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {14, UPB_SIZE(64, 104), 7, 25, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {16, UPB_SIZE(68, 112), 8, 33, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {17, UPB_SIZE(8, 8), 0, 0, 5, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {18, UPB_SIZE(156, 288), 0, 19, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {19, UPB_SIZE(72, 120), 9, 16, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {20, UPB_SIZE(76, 128), 10, 33, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {21, UPB_SIZE(80, 136), 11, 20, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {22, UPB_SIZE(84, 144), 12, 4, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {23, UPB_SIZE(180, 336), UPB_SIZE(-185, -345), 10, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {24, UPB_SIZE(88, 152), 13, 28, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {25, UPB_SIZE(92, 160), 14, 27, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {26, UPB_SIZE(12, 12), 0, 0, 5, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {27, UPB_SIZE(96, 168), 15, 1, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {28, UPB_SIZE(32, 40), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {29, UPB_SIZE(100, 176), 16, 26, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {30, UPB_SIZE(104, 184), 17, 18, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {31, UPB_SIZE(16, 16), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {32, UPB_SIZE(17, 17), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {33, UPB_SIZE(108, 192), 18, 31, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {34, UPB_SIZE(180, 336), UPB_SIZE(-185, -345), 7, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {36, UPB_SIZE(160, 296), 0, 13, 11, kUpb_FieldMode_Map | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {37, UPB_SIZE(180, 336), UPB_SIZE(-185, -345), 5, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {38, UPB_SIZE(172, 320), UPB_SIZE(-177, -329), 2, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {39, UPB_SIZE(18, 18), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {40, UPB_SIZE(164, 304), 0, 14, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {41, UPB_SIZE(112, 200), 19, 15, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {42, UPB_SIZE(116, 208), 20, 21, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {43, UPB_SIZE(168, 312), 0, 12, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {44, UPB_SIZE(120, 216), 21, 9, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {45, UPB_SIZE(19, 19), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {46, UPB_SIZE(124, 224), 22, 30, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {47, UPB_SIZE(20, 20), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {48, UPB_SIZE(128, 232), 23, 29, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {49, UPB_SIZE(132, 240), 24, 17, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {50, UPB_SIZE(136, 248), 25, 8, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {51, UPB_SIZE(21, 21), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {52, UPB_SIZE(180, 336), UPB_SIZE(-185, -345), 6, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {53, UPB_SIZE(140, 256), 26, 22, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {54, UPB_SIZE(144, 264), 27, 32, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {55, UPB_SIZE(148, 272), 28, 29, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {56, UPB_SIZE(180, 336), UPB_SIZE(-185, -345), 11, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_msginit = {
  &envoy_config_cluster_v3_Cluster_submsgs[0],
  &envoy_config_cluster_v3_Cluster__fields[0],
  UPB_SIZE(192, 352), 51, upb_ExtMode_NonExtendable, 6, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_Cluster_TransportSocketMatch_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_TransportSocket_msginit},
  {.submsg = &google_protobuf_Struct_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster_TransportSocketMatch__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24), 1, 1, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {3, UPB_SIZE(16, 32), 2, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_TransportSocketMatch_msginit = {
  &envoy_config_cluster_v3_Cluster_TransportSocketMatch_submsgs[0],
  &envoy_config_cluster_v3_Cluster_TransportSocketMatch__fields[0],
  UPB_SIZE(24, 48), 3, upb_ExtMode_NonExtendable, 3, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_Cluster_CustomClusterType_submsgs[1] = {
  {.submsg = &google_protobuf_Any_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster_CustomClusterType__fields[2] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_CustomClusterType_msginit = {
  &envoy_config_cluster_v3_Cluster_CustomClusterType_submsgs[0],
  &envoy_config_cluster_v3_Cluster_CustomClusterType__fields[0],
  UPB_SIZE(16, 32), 2, upb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_Cluster_EdsClusterConfig_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_ConfigSource_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster_EdsClusterConfig__fields[2] = {
  {1, UPB_SIZE(12, 24), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_EdsClusterConfig_msginit = {
  &envoy_config_cluster_v3_Cluster_EdsClusterConfig_submsgs[0],
  &envoy_config_cluster_v3_Cluster_EdsClusterConfig__fields[0],
  UPB_SIZE(16, 32), 2, upb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_Cluster_LbSubsetConfig_submsgs[2] = {
  {.submsg = &envoy_config_cluster_v3_Cluster_LbSubsetConfig_LbSubsetSelector_msginit},
  {.submsg = &google_protobuf_Struct_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster_LbSubsetConfig__fields[7] = {
  {1, UPB_SIZE(4, 4), 0, 0, 5, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 16), 1, 1, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {3, UPB_SIZE(16, 24), 0, 0, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {4, UPB_SIZE(8, 8), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {5, UPB_SIZE(9, 9), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {6, UPB_SIZE(10, 10), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {7, UPB_SIZE(11, 11), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_LbSubsetConfig_msginit = {
  &envoy_config_cluster_v3_Cluster_LbSubsetConfig_submsgs[0],
  &envoy_config_cluster_v3_Cluster_LbSubsetConfig__fields[0],
  UPB_SIZE(24, 32), 7, upb_ExtMode_NonExtendable, 7, 255, 0,
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster_LbSubsetConfig_LbSubsetSelector__fields[4] = {
  {1, UPB_SIZE(8, 8), 0, 0, 9, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(0, 0), 0, 0, 5, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 16), 0, 0, 9, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {4, UPB_SIZE(4, 4), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_LbSubsetConfig_LbSubsetSelector_msginit = {
  NULL,
  &envoy_config_cluster_v3_Cluster_LbSubsetConfig_LbSubsetSelector__fields[0],
  UPB_SIZE(16, 24), 4, upb_ExtMode_NonExtendable, 4, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_Cluster_SlowStartConfig_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_RuntimeDouble_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster_SlowStartConfig__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 1, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 2, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_SlowStartConfig_msginit = {
  &envoy_config_cluster_v3_Cluster_SlowStartConfig_submsgs[0],
  &envoy_config_cluster_v3_Cluster_SlowStartConfig__fields[0],
  UPB_SIZE(16, 24), 2, upb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_Cluster_RoundRobinLbConfig_submsgs[1] = {
  {.submsg = &envoy_config_cluster_v3_Cluster_SlowStartConfig_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster_RoundRobinLbConfig__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_RoundRobinLbConfig_msginit = {
  &envoy_config_cluster_v3_Cluster_RoundRobinLbConfig_submsgs[0],
  &envoy_config_cluster_v3_Cluster_RoundRobinLbConfig__fields[0],
  UPB_SIZE(8, 16), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_Cluster_LeastRequestLbConfig_submsgs[3] = {
  {.submsg = &envoy_config_cluster_v3_Cluster_SlowStartConfig_msginit},
  {.submsg = &envoy_config_core_v3_RuntimeDouble_msginit},
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster_LeastRequestLbConfig__fields[3] = {
  {1, UPB_SIZE(4, 8), 1, 2, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 2, 1, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24), 3, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_LeastRequestLbConfig_msginit = {
  &envoy_config_cluster_v3_Cluster_LeastRequestLbConfig_submsgs[0],
  &envoy_config_cluster_v3_Cluster_LeastRequestLbConfig__fields[0],
  UPB_SIZE(16, 32), 3, upb_ExtMode_NonExtendable, 3, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_Cluster_RingHashLbConfig_submsgs[1] = {
  {.submsg = &google_protobuf_UInt64Value_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster_RingHashLbConfig__fields[3] = {
  {1, UPB_SIZE(8, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {3, UPB_SIZE(4, 4), 0, 0, 5, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {4, UPB_SIZE(12, 16), 2, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_RingHashLbConfig_msginit = {
  &envoy_config_cluster_v3_Cluster_RingHashLbConfig_submsgs[0],
  &envoy_config_cluster_v3_Cluster_RingHashLbConfig__fields[0],
  UPB_SIZE(16, 24), 3, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_Cluster_MaglevLbConfig_submsgs[1] = {
  {.submsg = &google_protobuf_UInt64Value_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster_MaglevLbConfig__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_MaglevLbConfig_msginit = {
  &envoy_config_cluster_v3_Cluster_MaglevLbConfig_submsgs[0],
  &envoy_config_cluster_v3_Cluster_MaglevLbConfig__fields[0],
  UPB_SIZE(8, 16), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster_OriginalDstLbConfig__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_OriginalDstLbConfig_msginit = {
  NULL,
  &envoy_config_cluster_v3_Cluster_OriginalDstLbConfig__fields[0],
  UPB_SIZE(8, 8), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_Cluster_CommonLbConfig_submsgs[5] = {
  {.submsg = &envoy_config_cluster_v3_Cluster_CommonLbConfig_ConsistentHashingLbConfig_msginit},
  {.submsg = &envoy_config_cluster_v3_Cluster_CommonLbConfig_LocalityWeightedLbConfig_msginit},
  {.submsg = &envoy_config_cluster_v3_Cluster_CommonLbConfig_ZoneAwareLbConfig_msginit},
  {.submsg = &envoy_type_v3_Percent_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster_CommonLbConfig__fields[7] = {
  {1, UPB_SIZE(4, 8), 1, 3, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(16, 32), UPB_SIZE(-21, -41), 2, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {3, UPB_SIZE(16, 32), UPB_SIZE(-21, -41), 1, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {4, UPB_SIZE(8, 16), 2, 4, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {5, UPB_SIZE(1, 1), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {6, UPB_SIZE(2, 2), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {7, UPB_SIZE(12, 24), 3, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_CommonLbConfig_msginit = {
  &envoy_config_cluster_v3_Cluster_CommonLbConfig_submsgs[0],
  &envoy_config_cluster_v3_Cluster_CommonLbConfig__fields[0],
  UPB_SIZE(24, 48), 7, upb_ExtMode_NonExtendable, 7, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_Cluster_CommonLbConfig_ZoneAwareLbConfig_submsgs[2] = {
  {.submsg = &envoy_type_v3_Percent_msginit},
  {.submsg = &google_protobuf_UInt64Value_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster_CommonLbConfig_ZoneAwareLbConfig__fields[3] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 2, 1, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {3, UPB_SIZE(1, 1), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_CommonLbConfig_ZoneAwareLbConfig_msginit = {
  &envoy_config_cluster_v3_Cluster_CommonLbConfig_ZoneAwareLbConfig_submsgs[0],
  &envoy_config_cluster_v3_Cluster_CommonLbConfig_ZoneAwareLbConfig__fields[0],
  UPB_SIZE(16, 24), 3, upb_ExtMode_NonExtendable, 3, 255, 0,
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_CommonLbConfig_LocalityWeightedLbConfig_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, upb_ExtMode_NonExtendable, 0, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_Cluster_CommonLbConfig_ConsistentHashingLbConfig_submsgs[1] = {
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster_CommonLbConfig_ConsistentHashingLbConfig__fields[2] = {
  {1, UPB_SIZE(1, 1), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_CommonLbConfig_ConsistentHashingLbConfig_msginit = {
  &envoy_config_cluster_v3_Cluster_CommonLbConfig_ConsistentHashingLbConfig_submsgs[0],
  &envoy_config_cluster_v3_Cluster_CommonLbConfig_ConsistentHashingLbConfig__fields[0],
  UPB_SIZE(8, 16), 2, upb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_Cluster_RefreshRate_submsgs[1] = {
  {.submsg = &google_protobuf_Duration_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster_RefreshRate__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 2, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_RefreshRate_msginit = {
  &envoy_config_cluster_v3_Cluster_RefreshRate_submsgs[0],
  &envoy_config_cluster_v3_Cluster_RefreshRate__fields[0],
  UPB_SIZE(16, 24), 2, upb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_Cluster_PreconnectPolicy_submsgs[1] = {
  {.submsg = &google_protobuf_DoubleValue_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster_PreconnectPolicy__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 2, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_PreconnectPolicy_msginit = {
  &envoy_config_cluster_v3_Cluster_PreconnectPolicy_submsgs[0],
  &envoy_config_cluster_v3_Cluster_PreconnectPolicy__fields[0],
  UPB_SIZE(16, 24), 2, upb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_Cluster_TypedExtensionProtocolOptionsEntry_submsgs[1] = {
  {.submsg = &google_protobuf_Any_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_Cluster_TypedExtensionProtocolOptionsEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 0, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_Cluster_TypedExtensionProtocolOptionsEntry_msginit = {
  &envoy_config_cluster_v3_Cluster_TypedExtensionProtocolOptionsEntry_submsgs[0],
  &envoy_config_cluster_v3_Cluster_TypedExtensionProtocolOptionsEntry__fields[0],
  UPB_SIZE(16, 32), 2, upb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_LoadBalancingPolicy_submsgs[1] = {
  {.submsg = &envoy_config_cluster_v3_LoadBalancingPolicy_Policy_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_LoadBalancingPolicy__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_LoadBalancingPolicy_msginit = {
  &envoy_config_cluster_v3_LoadBalancingPolicy_submsgs[0],
  &envoy_config_cluster_v3_LoadBalancingPolicy__fields[0],
  UPB_SIZE(8, 8), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_LoadBalancingPolicy_Policy_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_TypedExtensionConfig_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_LoadBalancingPolicy_Policy__fields[1] = {
  {4, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_LoadBalancingPolicy_Policy_msginit = {
  &envoy_config_cluster_v3_LoadBalancingPolicy_Policy_submsgs[0],
  &envoy_config_cluster_v3_LoadBalancingPolicy_Policy__fields[0],
  UPB_SIZE(8, 16), 1, upb_ExtMode_NonExtendable, 0, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_UpstreamBindConfig_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_Address_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_UpstreamBindConfig__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_UpstreamBindConfig_msginit = {
  &envoy_config_cluster_v3_UpstreamBindConfig_submsgs[0],
  &envoy_config_cluster_v3_UpstreamBindConfig__fields[0],
  UPB_SIZE(8, 16), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_cluster_v3_UpstreamConnectionOptions_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_TcpKeepalive_msginit},
};

static const upb_MiniTable_Field envoy_config_cluster_v3_UpstreamConnectionOptions__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_UpstreamConnectionOptions_msginit = {
  &envoy_config_cluster_v3_UpstreamConnectionOptions_submsgs[0],
  &envoy_config_cluster_v3_UpstreamConnectionOptions__fields[0],
  UPB_SIZE(8, 16), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Field envoy_config_cluster_v3_TrackClusterStats__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {2, UPB_SIZE(1, 1), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_cluster_v3_TrackClusterStats_msginit = {
  NULL,
  &envoy_config_cluster_v3_TrackClusterStats__fields[0],
  UPB_SIZE(8, 8), 2, upb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable *messages_layout[25] = {
  &envoy_config_cluster_v3_ClusterCollection_msginit,
  &envoy_config_cluster_v3_Cluster_msginit,
  &envoy_config_cluster_v3_Cluster_TransportSocketMatch_msginit,
  &envoy_config_cluster_v3_Cluster_CustomClusterType_msginit,
  &envoy_config_cluster_v3_Cluster_EdsClusterConfig_msginit,
  &envoy_config_cluster_v3_Cluster_LbSubsetConfig_msginit,
  &envoy_config_cluster_v3_Cluster_LbSubsetConfig_LbSubsetSelector_msginit,
  &envoy_config_cluster_v3_Cluster_SlowStartConfig_msginit,
  &envoy_config_cluster_v3_Cluster_RoundRobinLbConfig_msginit,
  &envoy_config_cluster_v3_Cluster_LeastRequestLbConfig_msginit,
  &envoy_config_cluster_v3_Cluster_RingHashLbConfig_msginit,
  &envoy_config_cluster_v3_Cluster_MaglevLbConfig_msginit,
  &envoy_config_cluster_v3_Cluster_OriginalDstLbConfig_msginit,
  &envoy_config_cluster_v3_Cluster_CommonLbConfig_msginit,
  &envoy_config_cluster_v3_Cluster_CommonLbConfig_ZoneAwareLbConfig_msginit,
  &envoy_config_cluster_v3_Cluster_CommonLbConfig_LocalityWeightedLbConfig_msginit,
  &envoy_config_cluster_v3_Cluster_CommonLbConfig_ConsistentHashingLbConfig_msginit,
  &envoy_config_cluster_v3_Cluster_RefreshRate_msginit,
  &envoy_config_cluster_v3_Cluster_PreconnectPolicy_msginit,
  &envoy_config_cluster_v3_Cluster_TypedExtensionProtocolOptionsEntry_msginit,
  &envoy_config_cluster_v3_LoadBalancingPolicy_msginit,
  &envoy_config_cluster_v3_LoadBalancingPolicy_Policy_msginit,
  &envoy_config_cluster_v3_UpstreamBindConfig_msginit,
  &envoy_config_cluster_v3_UpstreamConnectionOptions_msginit,
  &envoy_config_cluster_v3_TrackClusterStats_msginit,
};

const upb_MiniTable_File envoy_config_cluster_v3_cluster_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  25,
  0,
  0,
};

#include "upb/port_undef.inc"
