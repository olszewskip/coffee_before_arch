#include <iostream>

using namespace std;

char print_char(char c){
	cout << c << " " << sizeof(c) << endl;
	return 'A';
}

int print_int(int i){
	cout << i << " " << sizeof(i) << endl;
	return 1234;
}

float print_float(float f){
	cout << f << " " << sizeof(f) << endl;
	return 12.345;
}

double print_double(double d){
	cout << d << " " << sizeof(double) << endl;
	return 1.2345;
}

int main(){

	char character = 'a';
	int integer = 45678;
	float single_prec = 135.79;
	double double_prec = 246.8;
	
	character = print_char(character);

	return 0;
}
