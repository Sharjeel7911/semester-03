#include"Circle.h"

Circle::Circle() : PI(3.141592653589793) {
    m_radius = 0.0;
}

Circle::Circle(double r) : PI(3.141592653589793) {
    m_radius = r;
}

void Circle::setRadius(double r) {
    m_radius = r;
}

double Circle::getRadius() {
    return m_radius;
}

double Circle::diameter() {
    return 2 * m_radius;
}

double Circle::area() {
    return PI * m_radius * m_radius;
}

double Circle::circumference() {
    return 2 * PI * m_radius;
}

void Circle::displayCircle() {
    cout << "Circle radius: " << m_radius << endl;
    cout << "Cicle diameter: " << diameter() << endl;
    cout << "Area: " << area() << endl;
    cout << "Circumference: " << circumference() << endl;
}

