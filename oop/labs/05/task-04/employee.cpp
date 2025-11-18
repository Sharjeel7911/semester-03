#include "Employee.h"

int Employee::m_EMPLOYEE_COUNT = 0;

Employee::Employee() : m_MAX_SALARY(100000.0) {
    m_name = nullptr;
    m_age = 0;
    m_salary = 0.0;
    m_EMPLOYEE_COUNT++;
}

Employee::Employee(const char* name, int age, float salary) : m_MAX_SALARY(100000.0) {
    int size = 0;
    while (name[size] != '\0') size++;
    m_name = new char[size + 1];
    for (int i = 0; i < size; i++) {
        m_name[i] = m_name[i];
    }
    m_name[size] = '\0';

    m_age = age;
    if (salary > m_MAX_SALARY) m_salary = m_MAX_SALARY;
    else m_salary = salary;
    m_EMPLOYEE_COUNT++;
}

Employee::~Employee() {
    delete[] m_name;
    m_EMPLOYEE_COUNT--;
}

void Employee::setName(const char* name) {
    delete[] m_name;
    int size = 0;
    while (name[size] != '\0') size++;
    m_name = new char[size + 1];
    for (int i = 0; i < size; i++) {
        m_name[i] = m_name[i];
    }
    m_name[size] = '\0';

}

void Employee::setAge(int age) {
    m_age = age;
}

void Employee::setSalary(float salary) {
    if (salary > m_MAX_SALARY) m_salary = m_MAX_SALARY;
    else m_salary = salary;
}

char* Employee::getName() const {
    int size = 0;
    while (m_name[size] != '\0') size++;
    char* temp = new char[size + 1];
    for (int i = 0; i < size; i++) {
        temp[i] = m_name[i];
    }
    temp[size] = '\0';
    return temp;
}

int Employee::getAge() const {
    return m_age;
}

float Employee::getSalary() const {
    return m_salary;
}

int Employee::getEmployeeCount() {
    return m_EMPLOYEE_COUNT;
}

void Employee::display() const {
    if (m_name == nullptr) {
        cout << "Name: N/A" << endl;
        cout << "Age: " << m_age << endl;
        cout << "Salary: " << m_salary << endl;
        cout << "Max Salary: " << m_MAX_SALARY << endl;
        cout << "Employee Count: " << m_EMPLOYEE_COUNT << endl;
    } else {
        cout << "Name: " << m_name << endl;
        cout << "Age: " << m_age << endl;
        cout << "Salary: " << m_salary << endl;
        cout << "Max Salary: " << m_MAX_SALARY << endl;
        cout << "Employee Count: " << m_EMPLOYEE_COUNT << endl;
    }
}