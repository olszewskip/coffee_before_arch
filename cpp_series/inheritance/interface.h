#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
   string license;
   int year;
public:
   Vehicle(const string &myLicense, const int &myYear)
      : license(myLicense), year(myYear) {}
   const string &getLicense() const {return license;}
   const int &getYear() const {return year;}
};

class Car : public Vehicle {
private:
   string style;
public:
   Car(const string &myLicense, const int myYear, const string myStyle)
      : Vehicle(myLicense, myYear), style(myStyle) {}
   const string &getStyle() const {return style;}
};

class Truck : public Vehicle {
private:
   int bed_length;
public:
   Truck(const string &myLicense, const int myYear, const int myBedLength)
      : Vehicle(myLicense, myYear), bed_length(myBedLength) {}
   const int &getBedLength() {return bed_length;}
};
   
