// This header file includes the classes relating to two
// different vector classes
// By: Nick from CofeeBeforeArch

// A vector class that has all coordinates
class vector1{
public:
	double start_x;
	double start_y;
	double end_x;
	double end_y;

	void print();
};

class point{
public:
	double x;
	double y;
};

class vector2{
public:
	point start;
	point end;
};
