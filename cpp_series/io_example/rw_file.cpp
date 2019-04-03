#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <bitset>

using namespace std;

void print_matrix(int* a, int n) {
   for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
         cout << a[i*n + j] << " ";
      }
      cout << endl;
   }
}

void m_mul(int *a, int *b, int *c, int n){
   int temp;
   for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
         temp = 0;
         for(int k = 0; k < n; k++){
            temp += a[i * n + k] * b[k * n + j];
         }
         c[i * n + j] = temp;
      }
   }
}

int main(int argc, char* argv[]){

   fstream file1;

   cout << bitset<8>(ios::app) <<endl;

   cout << bitset<8>(ios::ate) <<endl;

   cout << bitset<8>(ios::in) <<endl;

   cout << bitset<8>(ios::out) <<endl;

   cout << bitset<8>(ios::trunc) <<endl;

   cout << bitset<8>((ios::out | ios::in)) <<endl;

   file1.open(argv[1], ios::in);

   int *a;
   int n = 3;
   size_t bytes = n * n * sizeof(int);
   a = (int*)malloc(bytes);

   int temp;
   for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++) {
         file1 >> a[i * n + j];
      }
   }

   file1.close();

   print_matrix(a, n);


   fstream file2;

   file2.open(argv[2], ios::in);

   file2 >> n;
   int *b;
   bytes = n * n * sizeof(int);
   b = (int*)malloc(bytes);

   for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++) {
         file2 >> b[i * n + j];
      }
   }

   file2.close();

   print_matrix(b, n);

   int *c;
   c = (int*)malloc(bytes);
   m_mul(a, b, c, n);

   fstream file3;
   file3.open(argv[3], ios::out);
   for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
         file3 << c[i * n + j] << ' ';
      }
      file3 << '\n';
   }

   file3.close();

   return 0;
}

