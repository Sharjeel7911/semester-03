#include"ComplexNumber.h"

void ComplexNumber::setReal(double num) {
    m_realPart = num;
}

void ComplexNumber::setImaginary(double num) {
    m_imaginaryPart = num;
}

double ComplexNumber::getReal() {
    return m_realPart;
}

double ComplexNumber::getImaginary() {
    return m_imaginaryPart;
}

void ComplexNumber::display() {
    cout << "Complex Number: " << getReal() << " + " << getImaginary() << "i" << endl;
}

void ComplexNumber::displaySum(double num1, double num2) {
    double a = 0, b = 0;
    a = num1 + m_realPart;
    b = num2 + m_imaginaryPart;
    cout << a << " + " << b << "i" << endl;
}

void ComplexNumber::displayDifference(double num1, double num2) {
    double a = 0, b = 0;
    a = num1 - m_realPart;
    b = num2 - m_imaginaryPart;
    cout << a << " + " << b << "i" << endl;
}

