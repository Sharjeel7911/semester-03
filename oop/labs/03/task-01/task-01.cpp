#include "Rectangle.h"

void rectangle() {
    system("cls");
    Rectangle r_1;
    cout << "Enter the length" << endl;
    double l;
    cin >> l;
    cout << "Enter the width" << endl;
    double w;
    cin >> w;
    r_1.setValue(l, w);

    r_1.display();
    system("pause");
}

