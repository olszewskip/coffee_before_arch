#include <cuda_runtime.h>
#include <device_launch_parameters.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <assert.h>

__global__
void vectorAdd(int* a, int* b, int* c, int n) {
   int tid = (blockIdx.x * blockDim.x) + threadIdx.x;
   if (tid < n){
      c[tid] = a[tid] + b[tid];
   }
}

void matrix_init(int* a, int n) {
   for (int i = 0; i < n; i++) {
      a[i] = rand() % 100;
   }
}

void error_check(int* a , int* b, int* c, int n) {
   for (int i = 0; i < n; i++) {
      assert(c[i] == a[i] + b[i]);
   }
}

int main() {
   int n = 1 << 16;
   int *h_a, *h_b, *h_c;
   int *d_a, *d_b, *d_c;

   size_t bytes = n * sizeof(int);

   h_a = (int*)malloc(bytes);
   h_b = (int*)malloc(bytes);
   h_c = (int*)malloc(bytes);
   
   cudaMalloc(&d_a, bytes);
   cudaMalloc(&d_b, bytes);
   cudaMalloc(&d_c, bytes);
   
   matrix_init(h_a, n);
   matrix_init(h_b, n);

   cudaMemcpy(d_a, h_a, bytes, cudaMemcpyHostToDevice);
   cudaMemcpy(d_b, h_b, bytes, cudaMemcpyHostToDevice);

   int NUM_THREADS = 256;
   int NUM_BLOCKS = (int)ceil(n / NUM_THREADS);

   vectorAdd<<<NUM_BLOCKS, NUM_THREADS>>>(d_a, d_b, d_c, n);

   cudaMemcpy(h_c, d_c, bytes, cudaMemcpyDeviceToHost);

   error_check(h_a, h_b, h_c, n);

   printf("SUCCESS\n");

   return 0;
}

