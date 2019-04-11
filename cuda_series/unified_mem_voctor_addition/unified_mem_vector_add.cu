#include <cuda_runtime.h>
#include <device_launch_parameters.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <assert.h>

__global__
void unifMem_vectorAdd(int* a, int* b, int* c, int n) {
   int tid = (blockIdx.x * blockDim.x) + threadIdx.x;
   if (tid < n){
      c[tid] = a[tid] + b[tid];
   }
}

void vectors_init(int* a, int* b, int n) {
   for (int i = 0; i < n; i++) {
      a[i] = rand() % 10;
      b[i] = rand() % 10;
   }
}

void error_check(int* a , int* b, int* c, int n) {
   for (int i = 0; i < n; i++) {
      assert(c[i] == a[i] + b[i]);
   }
}

int main() {
   int n = 1 << 16;
   int id = cudaGetDevice(&id);
   int *a, *b, *c;
   size_t bytes = n * sizeof(int);

   cudaMallocManaged(&a, bytes);
   cudaMallocManaged(&b, bytes);
   cudaMallocManaged(&c, bytes);
   
   vectors_init(a, b, n);

   int BLOCK_SIZE = 256;
   int GRID_SIZE = (int)ceil(n / BLOCK_SIZE);
   
   cudaMemPrefetchAsync (a, bytes, id);
   cudaMemPrefetchAsync (b, bytes, id);

   unifMem_vectorAdd <<<GRID_SIZE, BLOCK_SIZE>>> (a, b, c, n);
   
   cudaDeviceSynchronize();
   
   cudaMemPrefetchAsync(c, bytes, cudaCpuDeviceId);

   error_check(a, b, c, n);

   printf("SUCCESS\n");

   return 0;
}

