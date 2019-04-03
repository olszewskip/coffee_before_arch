// By Nick from CoffeeBeforeArch

#include <iostream>
#include "interface.h"

using namespace std;

int main(){

   vector v1;
   vector v2(1.0, 2.0, 3.0, 4.0);
   vector v3(point(0.0, 3.0), point(1.0, 2.0));
   vector v4 = v3;

   v1.print();
   v2.print();
   v3.print();
   v4.print();

   return 0;
}

