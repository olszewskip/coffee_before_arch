#include <iostream>

#include "class_interface.h"

using namespace std;

void print_vector1(vector1 v){
	cout << "Start x: " << v.start_x << ", Start_y: " << v.start_y << endl;
	cout << "End x: " << v.end_x << ", End_y: " << v.end_y << endl;
}

int main() {
	vector1 single_object;
	single_object.start_x = 1.0;
	single_object.start_y = 2.0;
	single_object.end_x = 3.0;
	single_object.end_y = 4.0;

	print_vector1(single_object);

	single_object.print();

return 0;
}

