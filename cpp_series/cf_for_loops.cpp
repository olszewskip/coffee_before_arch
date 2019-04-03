#include <iostream>

using namespace std;

int main() {

	int multiplicand = 5;
	int multiplier = 10;
	int product = 0;

	cout << "before" << endl;
	for (int i = 0; i < multiplier; i++) {
		product += multiplicand;
		cout << i << " " << product << endl;
	}

	return 0;
}

