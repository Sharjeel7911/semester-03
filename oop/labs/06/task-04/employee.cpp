#include "Employee.h"

Employee::Employee(){
    m_id = 0;
    m_salary = 0.0;
}

Employee::Employee(int id, double salary)  {
    m_id = id;
    m_salary = salary;
}

void Employee::setId(int id) {
    m_id = id;
}

int Employee::getId() const {
    return m_id;
}

void Employee::setSalary(double salary) {
    m_salary = salary;
}

double Employee::getSalary() const {
    return m_salary;
}

void Employee::display() const {
    cout << "Employee Id: " << m_id << endl;
    cout << "Salary: " << m_salary << endl << endl;
}