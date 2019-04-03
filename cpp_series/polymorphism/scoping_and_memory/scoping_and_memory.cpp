#include <iostream>
#include <vector>

using namespace std;

int* getPtrBad() {
   int x = 5;
   return &x;
}

int* getPtrGood() {
   int *x = new int;
   *x = 5;
   return x;
}

int main() {

   if(true){
      int x = 5;
   }

   int *p1 = getPtrBad();
   int *p2 = getPtrGood();

   cout << "Address: " << p2 << " Value: " << p2 << endl;

   delete p2;

   vector<int*> old_pointers;

   for(int i = 0; i < 5; i++){
      p2 = getPtrGood();
      old_pointers.push_back(p2);
   }
   delete p2; // :(

   for(int i = 0; i < old_pointers.size() - 1; i++){
      cout << "Address: " << old_pointers[i] << " Value: " << *old_pointers[i] << endl;
   }

   int *array = new int[100];

   delete[] array;

   return 0;
}

