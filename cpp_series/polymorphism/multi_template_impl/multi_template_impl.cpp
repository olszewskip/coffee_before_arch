#include <iostream>
#include <cctype>

#include "interface.h"

using namespace std;

int main() {

   Container<int> int_container(1);

   Container<char> char_container('a');

   cout << int_container.inc() << endl;
   cout << char_container.uppercase() << endl;

   return 0;
}

