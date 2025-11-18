#include"Rectangle.h"

void Rectangle::setValue(double l, double w) {
    length = l;
    width = w;
}
double Rectangle::calculateArea() {
    return length * width;
}
void Rectangle::display() {
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << calculateArea() << endl;
}