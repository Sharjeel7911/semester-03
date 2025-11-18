#include "../main.h"

class Rectangle {
private:
    double m_length;
    double m_width;
public:
    Rectangle();
    Rectangle(double, double);
    Rectangle(const Rectangle&);
    ~Rectangle();

    void setLength(double);
    void setWidth(double);

    double getLength() const;
    double getWidth() const;

    double area() const;
    double perimeter() const;

    Rectangle newRectangle(Rectangle, Rectangle) const;
    Rectangle areaAndPerimeter(Rectangle, Rectangle) const;
};