#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> &v){
   for(int i = 0; i < v.size(); i++){
      cout << v[i] << " ";
   }
   cout << endl;
}

int main(){

   vector<int> v1;

   for(int i = 0; i < 10; i++){
      v1.push_back(i);
   }

   print_vector(v1);

   cout << v1.front() << endl;
   cout << v1.back() << endl;
   cout << v1[0] << endl;
   v1.clear();
   cout << v1.size() << endl;
   v1.resize(10);
   cout << v1.size() << endl;
   print_vector(v1);
   
   for(int i = 0; i < v1.size(); i++){
      v1.at(i) = i;
   }
   
   v1.insert(v1.begin() + 4, 5);
   print_vector(v1);
   
   v1.erase(v1.begin() + 4);
   print_vector(v1);

   v1.pop_back();
   print_vector(v1);

   return 0;
}

