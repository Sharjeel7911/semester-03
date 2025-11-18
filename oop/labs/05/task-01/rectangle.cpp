#include "Rectangle.h"

Rectangle::Rectangle() {
    m_length = 0.0;
    m_width = 0.0;
}

Rectangle::Rectangle(double length, double width) {
    m_length = length;
    m_width = width;
}

Rectangle::Rectangle(const Rectangle& obj) {
    m_length = obj.m_length;
    m_width = obj.m_width;
}

Rectangle::~Rectangle() {

}

void Rectangle::setLength(double length) {
    m_length = length;
}

void Rectangle::setWidth(double width) {
    m_width = width;
}

double Rectangle::getLength() const {
    return m_length;
}

double Rectangle::getWidth() const {
    return m_width;
}

double Rectangle::area() const {
    return m_length * m_width;
}

double Rectangle::perimeter() const {
    return 2 * (m_length + m_width);
}

Rectangle Rectangle::newRectangle(Rectangle r_1, Rectangle r_2) const {
    Rectangle temp;
    if (r_1.area() > r_2.area()) {
        temp = r_1;
    } else {
        temp = r_2;
    }
    return temp;
}

Rectangle Rectangle::areaAndPerimeter(Rectangle r_1, Rectangle r_2) const {
    Rectangle temp;
    temp.m_length = r_1.getLength() + r_2.getLength();
    temp.m_width = r_1.getWidth() + r_2.getWidth();
    return temp;
}