#include <iostream>

using namespace std;

int sum_overload(const int a, const int b){
   return a + b;
}

double sum_overload(const double a, const double b){
   return a + b;
}

template <typename T, typename U>
U sum(const T a, const U b) {
   return a + b;
}

int main() {
   int a_i = 10;
   int b_i = 20;
   double a_d = 1.234;
   double b_d = 6.678;

   cout << "Overload int sum: " << sum_overload(a_i, b_i) << endl;
   cout << "Overload double sum: " << sum_overload(a_d, b_d) << endl;

   cout << "Templated int sum: " << sum(a_i, b_i) << endl;
   cout << "Templated double sum: " << sum(a_d, b_d) << endl;

   cout << "Templated int/double sum: " << sum(a_i, b_d) << endl;

   return 0;
}

