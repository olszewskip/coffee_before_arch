#include <iostream>
#include <string>

using namespace std;

int main() {
   string str1;

   str1 = "This is an example";
   cout << str1 << endl;

   string str2 = "This is another example";
   str1.swap(str2);
   cout << str1 << endl;
   cout << str2 << endl;

   for(int i = 0; i < str1.size(); i++)
      str1.at(i) = 'a';
   str1.resize(5);
   cout << str1 << endl;
   cout <<str1.size() <<endl;
   cout << str1.capacity() <<endl;
   str1.shrink_to_fit();
   cout << str1 << endl;
   cout << str1.size() << endl;
   cout << str1.capacity() << endl;

   return 0;
}

