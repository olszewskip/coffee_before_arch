#include <iostream>

using namespace std;

int main(){
	int multiplicand = 5;
	int multiplier = 10;
	int product = 0;

	cout << product << endl;

	for(int i = 0; i < multiplier; i++) {
		product += multiplicand;
		if(i ==4){
			cout << i << " " << product << endl;
		}else{
			continue;
		}
		cout << i << endl;
	}
	cout << product << endl;

	return 0;
}

