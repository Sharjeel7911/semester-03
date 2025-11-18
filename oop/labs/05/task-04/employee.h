#include "../main.h"

class Employee {
private:
    char* m_name;
    int m_age;
    float m_salary;
    static int m_EMPLOYEE_COUNT;
    const int m_MAX_SALARY;
public:
    Employee();
    Employee(const char*, int, float);
    ~Employee();

    void setName(const char*);
    void setAge(int);
    void setSalary(float);

    char* getName() const;
    int getAge() const;
    float getSalary() const;
    static int getEmployeeCount();
    void display() const;
};