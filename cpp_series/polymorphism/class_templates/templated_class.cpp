#include <iostream>

#include "interface.h"

using namespace std;

int main() {

   Point<int> p1(1, 2);

   Point<float> p2(0.54, 1.92);

   cout << "P1 X = " << p1.getX() << endl;
   cout << "P1 Y = " << p1.getY() << endl;

   cout << "P2 X = " << p2.getX() << endl;
   cout << "P2 Y = " << p2.getY() << endl;

   return 0;
}

