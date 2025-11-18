#include <iostream>
#include <cstdlib>
using namespace std;

float area(float);
double area(double, double);
double area(double);

void findArea()
{
    system("cls");
    // SQUARE
    cout << "Enter the length of one side of Square" << endl;
    float sq = 0;
    cin >> sq;
    cout << "The area of square is: " << area(sq) << endl;
    // TRIANGLE
    cout << "Enter the height of triangle" << endl;
    double h = 0;
    cin >> h;
    cout << "Enter the base of triangle" << endl;
    double b = 0;
    cin >> b;
    cout << "The area of triangle is: " << area(b, h) << endl;
    // CIRCLE
    cout << "Enter the radius of circle" << endl;
    double r = 0;
    cin >> r;
    cout << "The area of circle is: " << area(r) << endl;
    system("pause");
}

float area(float sq)
{
    return sq * sq;
}
double area(double b, double h)
{
    return (0.5 * (b * h));
}
double area(double r)
{
    return (3.14 * (r * r));
}
