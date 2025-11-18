#include "Class.h"

void calculator() {
    system("cls");
    Rectangle rec(10, 5);
    Calculator cal;

    cout << "Area using global friend function: " << calculateArea(rec) << endl;
    cout << "Area using calculator friend function: " << cal.area(rec) << endl;
    cout << "Display" << endl;
    cal.displayArea(rec);
    system("pause");
}