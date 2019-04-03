#include <iostream>

using namespace std;

int main(){

	int a = 5;
	int b = 10;

	if(a == 5) {
		cout << "Inside if statemaent (a== " << a << ")" <<endl;
	}

	if(a > 5){
		cout << "a > 5 (within if)" << endl;
	}else if(b == 10){
		cout << "b == 10 (within else if)" << endl;
	}else {
		cout << "Any other case!" << endl;
	}

	switch(a){
		case 4:
			cout << a << "1..." << endl;
			break;
		case 6:
			cout << a << "2..." << endl;
			break;
		default:
			cout << a << "3..." << endl;
	}

	return 0;
}

