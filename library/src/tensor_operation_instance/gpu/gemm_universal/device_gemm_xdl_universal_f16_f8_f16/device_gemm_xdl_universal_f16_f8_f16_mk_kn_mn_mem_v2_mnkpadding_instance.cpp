// SPDX-License-Identifier: MIT
// Copyright (c) 2018-2023, Advanced Micro Devices, Inc. All rights reserved.

#include "device_gemm_xdl_universal_f16_f8_f16_mk_kn_mn.hpp"

namespace ck {
namespace tensor_operation {
namespace device {
namespace instance {

using F16 = ck::half_t;
using F32 = float;

void add_device_gemm_xdl_universal_f16_f8_f16_mk_kn_mn_mem_v2_mnkpadding_instances(
    std::vector<std::unique_ptr<
        DeviceGemmV2<Row, Row, Row, F16, F8, F16, PassThrough, PassThrough, PassThrough>>>&
        instances)
{
    add_device_operation_instances(
        instances,
        device_gemm_xdl_universal_f16_f8_f16_mk_kn_mn_mem_instances<Interwave, GemmMNKPadding>{});
}

} // namespace instance
} // namespace device
} // namespace tensor_operation
} // namespace ck
