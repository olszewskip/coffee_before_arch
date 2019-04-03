#include "interface.h"

using namespace std;

int main() {
   IntegerArray ia1(10);

   for(int i = 0; i < ia1.size; i++){
      ia1.data[i] = i;
   }

   if(true){
      IntegerArray ia2 = ia1;
   }

   return 0;
}


