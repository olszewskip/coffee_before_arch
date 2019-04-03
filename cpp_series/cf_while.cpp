#include <iostream>

using namespace std;

int main(){
	int multiplicand = 5;
	int multiplier = 10;
	int product = 0;

	while(multiplier > 0) {
		product += multiplicand;
		multiplier--;
	}
	cout << multiplier << " " << product << endl;
	product = 0;
	do{
		product += multiplicand;
		multiplier--;
	}while(multiplier > 0);
	cout << multiplier << " " << product << endl;

	return 0;
}
