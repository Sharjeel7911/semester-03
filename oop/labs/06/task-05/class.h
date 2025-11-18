#pragma once
#include <iostream>
using namespace std;

class Rectangle;
class Calculator;

class Calculator {
public:
    int area(const Rectangle&);
    void displayArea(const Rectangle&);
};

class Rectangle {
private:
    int m_length;
    int m_width;

public:
    Rectangle(int, int);

    //friend class and function
    friend int calculateArea(const Rectangle&);
    friend int Calculator::area(const Rectangle&);
    friend class Calculator;
};