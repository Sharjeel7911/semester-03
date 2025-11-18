#include"Calculator.h"

void calculator() {
    system("cls");
    cout << "Enter three numbers: ";
    double n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    Calculator c_1;
    c_1.setValues(n1, n2, n3);
    c_1.display();
    system("pause");
}