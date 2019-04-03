class point{
private:
   double x;
   double y;
public:
   point();  
   point(double x_, double y_);
   void update(double new_x, double new_y);
   void print();
};

class vector{
private:
   point start;
   point end;
public:
   vector();
   vector(double x1, double y1, double x2, double y2);
   vector(vector &v);
   vector(point start, point end);
   void update(double x1, double y1, double x2, double y2);
   void print();
};

