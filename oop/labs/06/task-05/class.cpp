#include "Class.h"

Rectangle::Rectangle(int length, int width) : m_length(length), m_width(width) {
}

int calculateArea(const Rectangle& rec) {
    return rec.m_length * rec.m_width;
}

int Calculator::area(const Rectangle& rec) {
    return rec.m_length * rec.m_width;
}

void Calculator::displayArea(const Rectangle& r) {
    cout << "Area using Calculator (friend class): "
        << area(r) << endl;
}