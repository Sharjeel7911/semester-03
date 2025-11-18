#include "Employee.h"

Employee::Employee() {
    m_name = nullptr;
    m_id = 0;
    m_salary = 0.0;
    m_percentage = 0.0;
}

Employee::Employee(int id) {
    m_name = nullptr;
    m_id = id;
    m_salary = 0.0;
    m_percentage = 0.0;
}

Employee::~Employee() {
    delete[] m_name;
}

void Employee::setName(const char* n) {
    int size = 0;
    while (n[size] != '\0') size++;
    m_name = new char[size + 1];
    for (int i = 0; i < size; i++) m_name[i] = n[i];
    m_name[size] = '\0';
}

void Employee::setId(int id) {
    m_id = id;
}

void Employee::setSalary(double salary) {
    m_salary = salary;
}

void Employee::setPercentage(double percentage) {
    m_percentage = percentage;
}

char* Employee::getName() {
    int size = 0;
    while (m_name[size] != '\0') size++;
    char* tempName = new char[size + 1];
    for (int i = 0; i < size; i++) tempName[i] = m_name[i];
    tempName[size] = '\0';
    return tempName;
}

int Employee::getId() {
    return m_id;
}

double Employee::getSalary() {
    return m_salary;
}

void Employee::giveRaise(double percent) {
    m_salary += m_salary * (percent / 100.0);
}

void Employee::display() {
    cout << " *** Employee Details ***" << endl;
    cout << "Employee Name: " << m_name << endl;
    cout << "Employee ID: " << m_id << endl;
    cout << "Employee Salary: Rs. " << fixed << setprecision(3) << m_salary << endl;
    cout << "Salary raise percentage: " << setprecision(3) << m_percentage << " %" << endl;
}