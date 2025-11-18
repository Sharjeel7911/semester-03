#include "Calculator.h"

void Calculator::setValues(double n1, double n2, double n3) {
    num1 = n1;
    num2 = n2;
    num3 = n3;
}

double Calculator::add() {
    return num1 + num2 + num3;
}

double Calculator::average() {
    return (num1 + num2 + num3) / 3.0;
}

double Calculator::multiply() {
    return num1 * num2 * num3;
}

double Calculator::maximum() {
    if (num1 >= num2 && num1 >= num3) return num1;
    else if (num2 >= num1 && num2 >= num3) return num2;
    else return num3;
}

double Calculator::minimum() {
    if (num1 <= num2 && num1 <= num3) return num1;
    else if (num2 <= num1 && num2 <= num3) return num2;
    else return num3;
}

void Calculator::display() {
    cout << "Numbers: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "Sum: " << add() << endl;
    cout << "Average: " << average() << endl;
    cout << "Product: " << multiply() << endl;
    cout << "Maximum: " << maximum() << endl;
    cout << "Minimum: " << minimum() << endl;
}
