#include"Circle.h"

void circle() {
    system("cls");
    Circle c_1;

    cout << "Enter radius of circle: ";
    double r;
    cin >> r;
    c_1.setRadius(r);
    cout << endl;

    cout << "Creating circle using parameterized constructor." << endl;
    cout << "Enter radius of circle: ";
    cin >> r;
    Circle c_2(r);

    system("cls");
    cout << "Circle 1: " << endl;
    c_1.displayCircle();
    cout << endl;

    cout << "Circle 2: " << endl;
    c_2.displayCircle();
    system("pause");
}