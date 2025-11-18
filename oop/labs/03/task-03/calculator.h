#include<iostream>
#include <cstdlib>
using namespace std;

class Calculator {
private:
    double num1;
    double num2;
    double num3;
public:
    void setValues(double n1, double n2, double n3);
    double add();
    double average();
    double multiply();
    double maximum();
    double minimum();
    void display();
};
