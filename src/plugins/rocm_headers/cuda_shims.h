#pragma once

#include <hip/hip_runtime.h>



#define cudaGetDevice hipGetDevice
#define cudaSetDevice hipSetDevice
#define  cudaGetDeviceCount hipGetDeviceCount

#define CUmemorytype hipMemoryType

#define cudaFree hipFree
#define cudaMalloc hipMalloc
#define cudaMemcpy hipMemcpy
#define cudaMemset hipMemset

#define cudaMemcpyDeviceToHost hipMemcpyDeviceToHost
#define cudaMemcpyDeviceToHost hipMemcpyDeviceToHost

#define cuPointerGetAttributes hipDrvPointerGetAttributes
#define CUpointer_attribute hipPointer_attribute


#define cudaError_t hipError_t
#define cudaSuccess hipSuccess
#define CUDA_SUCCESS hipSuccess
#define cudaGetErrorString hipGetErrorString

#define  CU_POINTER_ATTRIBUTE_MEMORY_TYPE HIP_POINTER_ATTRIBUTE_MEMORY_TYPE
#define  CU_POINTER_ATTRIBUTE_IS_MANAGED HIP_POINTER_ATTRIBUTE_IS_MANAGED
#define  CU_POINTER_ATTRIBUTE_DEVICE_ORDINAL HIP_POINTER_ATTRIBUTE_DEVICE_ORDINAL
#define  CU_POINTER_ATTRIBUTE_CONTEXT HIP_POINTER_ATTRIBUTE_CONTEXT

#define  CU_MEMORYTYPE_HOST hipMemoryTypeHost
#define  CU_MEMORYTYPE_DEVICE hipMemoryTypeDevice

#define CUdeviceptr hipDeviceptr_t
#define CUdevice int

#define CUcontext hipCtx_t

#define cuCtxSetCurrent hipCtxSetCurrent

#define CUresult hipError_t


// cudaQueryAddr
// checkCudaError