#include "interface.h"

using namespace std;

int main() {

   Car car1("ABC-123", 2003, "Four-Door");
   Truck truck1("456-DEF", 2014, 7);

   Vehicle v1("VANITY", 1975);

   cout << car1.getDescription() << endl;
   cout << truck1.getDescription() << endl;

   cout << v1.getDescription() << endl;

   Vehicle *v2 = &car1;
   Vehicle *v3 = &truck1;

   cout << v2->getDescription() << endl;
   cout << v3->getDescription() << endl;

   return 0;
}

