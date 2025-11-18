#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double m_realPart;
    double m_imaginaryPart;
public:
    void setReal(double);
    void setImaginary(double);
    double getReal();
    double getImaginary();
    void displaySum(double, double);
    void displayDifference(double, double);
    void display();
};