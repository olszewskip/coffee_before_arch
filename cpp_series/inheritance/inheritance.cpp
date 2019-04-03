#include "interface.h"

using namespace std;

int main() {
   Car car1("ABC-123", 2003, "Four-Door");
   Car car2("VANITY", 2018, "Two-Door");

   cout << car1.getLicense() << endl;
   cout << car2.getLicense() << endl;

   cout << car1.getYear() << endl;
   cout << car2.getYear() << endl;

   cout << car1.getStyle() << endl;
   cout << car2.getStyle() << endl;

   Truck truck1("456-DEF", 2014, 7);
   cout << truck1.getLicense() << endl;
   cout << truck1.getYear() << endl;
   cout << truck1.getBedLength() << endl;

   return 0;
}

