#include <iostream>
#include <cstdlib>
using namespace std;

float area1(float, float);
float area2(float, float = 5);

void areaRec()
{
    system("cls");
    float l = 0.0, w = 0.0;
    cout << "Enter length of rectangle: ";
    cin >> l;
    cout << "Enter width of rectangle: ";
    cin >> w;
    cout << "Area of rectangle (int) is: " << area1(l, w) << endl;
    cout << "Area of rectangle (float) is: " << area2(l) << endl;

    system("pause");
}
float area1(float l, float w)
{
    return l * w;
}
float area2(float l, float w)
{
    return l * w;
}