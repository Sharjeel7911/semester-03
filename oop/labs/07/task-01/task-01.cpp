#include "ComplexNumber.h"

void complexNum() {
    clearScreen();
    ComplexNumber c1;
    cin >> c1;
    ComplexNumber c2;
    cin >> c2;

    ComplexNumber c3 = c1 + c2;

    clearScreen();
    if (c1 == c2) cout << "Object 1 is equal to Object 2" << endl;
    else cout << "Object 1 is not equal to Object 2" << endl;

    cout << "Addition: " << c1 + c2 << endl;
    cout << "Subtraction: " << c1 - c2 << endl;
    cout << "Division: " << c1 / c2 << endl;
    cout << "Multiplication: " << c1 * c2 << endl;
    cout << "Modulus: " << c1 % c2 << endl;
    cout << "Object 3: " << c3 << endl;
    pauseScreen();
}
