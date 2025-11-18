#include <iostream>
#include<cstdlib>
using namespace std;

class Rectangle {
private:
    double length;
    double width;
public:
    void setValue(double, double);
    void display();
    double calculateArea();

};