#include <iostream>
using namespace std;

class Circle {
private:
    double m_radius;
    const double PI;
public:
    Circle();
    Circle(double);
    void setRadius(double);
    double getRadius();
    double area();
    double circumference();
    double diameter();
    void displayCircle();
};