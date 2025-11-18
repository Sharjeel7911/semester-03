#include "Rectangle.h"

void rectangle() {
    system("cls");

    double length1, width1, length2, width2;

    //Parameterized Constructor
    cout << "Enter length and width of Rectangle 1: ";
    cin >> length1 >> width1;
    Rectangle r_1(length1, width1);

    //Using Setters
    cout << "Enter length and width of Rectangle 2: ";
    cin >> length2 >> width2;
    Rectangle r_2;
    r_2.setLength(length2);
    r_2.setWidth(width2);

    //Copy Constructor
    Rectangle r_3 = r_1;

    //Area and Perimeter
    system("cls");
    cout << "Area of Rectangle 1: " << r_1.area() << endl;
    cout << "Area of Rectangle 2: " << r_2.area() << endl;
    cout << "Area of Rectangle 3 (Copy of Rectangle 1): " << r_3.area() << endl;

    cout << endl;
    cout << "Perimeter of Rectangle 1: " << r_1.perimeter() << endl;
    cout << "Perimeter of Rectangle 2: " << r_2.perimeter() << endl;
    cout << "Perimeter of Rectangle 3 (Copy of Rectangle 1): " << r_3.perimeter() << endl;
    system("pause");

    //New Rectangle
    Rectangle r_4 = r_1.newRectangle(r_1, r_2);
    system("cls");
    cout << "New Rectangle (Greater Rectangle between Rectangle 1 and Rectangle 2): " << endl;
    cout << "Length: " << r_4.getLength() << endl;
    cout << "Width: " << r_4.getWidth() << endl << endl;

    //Area and Perimeter of combined rectangles
    cout << "Combined Rectangle: " << endl;
    Rectangle r_5 = r_1.areaAndPerimeter(r_1, r_2);
    cout << "Length: " << r_5.getLength() << endl;
    cout << "Width: " << r_5.getWidth() << endl;
    cout << "Area: " << r_5.area() << endl;
    cout << "Perimeter: " << r_5.perimeter() << endl;

    system("pause");
}