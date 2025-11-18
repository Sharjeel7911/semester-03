#pragma once
#include <iostream>
using namespace std;

class Employee {
private:
	int m_id;
	double m_salary;
public:
    Employee();

    Employee(int, double);

    void setId(int);
    int getId() const;

    void setSalary(double);
    double getSalary() const;

    void display() const;
};