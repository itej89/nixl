# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: Apache-2.0
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

ucx_utils_dep = [ ucx_dep ]
if cuda_dep.found()
    ucx_utils_dep += [ cuda_dep ]
    cpp_args = [ '-DHAVE_CUDA', '-DUSE_VRAM' ]
elif rocm_dep.found()
    ucx_utils_dep += [ rocm_dep ] 
    cpp_args = ['-DHAVE_ROCM', '-D__HIP_PLATFORM_AMD__=1', '-DUSE_VRAM', '-Wno-error=deprecated-declarations'  ]
endif

if get_option('buildtype') != 'release'

    ucx_worker_bin = executable('ucx_worker_test',
               'ucx_worker_test.cpp',
               dependencies: [ ucx_dep ],
               include_directories: [nixl_inc_dirs,utils_inc_dirs],
               link_with: ucx_utils_lib,
               install: true)

    ucx_am_bin = executable('ucx_am_test',
               'ucx_am_test.cpp',
               dependencies: [ ucx_dep ],
               include_directories: [nixl_inc_dirs,utils_inc_dirs],
               link_with: ucx_utils_lib,
               install: true)

    if cuda_dep.found() or rocm_dep.found()
        ucx_worker_cuda_bin = executable('ucx_worker_test_cuda',
                       'ucx_worker_test.cpp',
                       dependencies: ucx_utils_dep,
                       include_directories: [nixl_inc_dirs,utils_inc_dirs, '../../../../src/plugins/rocm_headers'],
                       cpp_args : cpp_args,
                       link_with: ucx_utils_lib,
                       install: true)

        ucx_am_cuda_bin = executable('ucx_am_test_cuda',
                       'ucx_am_test.cpp',
                       dependencies: ucx_utils_dep,
                       include_directories: [nixl_inc_dirs,utils_inc_dirs, '../../../../src/plugins/rocm_headers'],
                       cpp_args : cpp_args,
                       link_with: ucx_utils_lib,
                       install: true)

    endif

endif
