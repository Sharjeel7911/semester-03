#include <iostream>
#include <iomanip>
using namespace std;

class Employee {
private:
    char* m_name;
    int m_id;
    double m_salary;
    double m_percentage;
public:
    Employee();
    Employee(int);
    ~Employee();

    void setName(const char*);
    void setId(int);
    void setSalary(double);
    void setPercentage(double);
    char* getName();
    int getId();
    double getSalary();
    void giveRaise(double);
    void display();
};