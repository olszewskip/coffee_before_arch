#include <iostream>

#include "interface.h"

using namespace std;

point::point(){
   x = 0.0;
   y = 0.0;
}

point::point(double x_, double y_){
   x = x_;
   y = y_;
}

void point::update(double new_x, double new_y){
   x = new_x;
   y = new_y;
}

void point::print(){
   cout << "x = " << x << ", y = " << y <<endl;
}

vector::vector(){
   start.update(0.0, 0.0);
   end.update(0.0, 0.0);
}

vector::vector(double x1, double y1, double x2, double y2){
   start.update(x1, y1);
   end.update(x2, y2);
}

vector::vector(vector &v){
   start = v.end;
   end = v.start;
}

vector::vector(point start_, point end_){
   start = start_;
   end = end_;
}

void vector::update(double x1, double y1, double x2, double y2){
   start.update(x1, y1);
   end.update(x2, y2);
}

void vector::print(){
   cout << "start: "; start.print();
   cout << "end: "; end.print();
}

