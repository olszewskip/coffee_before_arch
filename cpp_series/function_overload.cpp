#include <iostream>

using namespace std;

void print(char c){
	cout << c << " " << sizeof(c) << endl;
}

void print(int i) {
	cout << i << " " << sizeof(i) << endl;
}

int main(){
	char c = 'a';
	print(c);

	return 0;
}

