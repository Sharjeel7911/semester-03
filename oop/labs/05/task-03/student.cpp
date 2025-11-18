#include "Student.h"

Student::Student() : m_ROLL_NO(0) {
    m_name = nullptr;
    m_marks = 0.0;
}

Student::Student(const char* n, int i, double m) : m_ROLL_NO(i) {
    setName(n);
    setMarks(m);
}

Student::Student(const Student& obj) : m_ROLL_NO(obj.m_ROLL_NO) {
    setName(obj.m_name);
    setMarks(obj.m_marks);
}

Student::~Student() {
    delete[] m_name;
}

void Student::setName(const char* n) {
    delete[] m_name;
    int size = 0;
    while (n[size] != '\0') size++;
    m_name = new char[size + 1];
    for (int i = 0; i < size; i++) {
        m_name[i] = n[i];
    }
    m_name[size] = '\0';
}

void Student::setRollNo(int i) {
    // m_rollNo is const; cannot be changed after initialization
}

void Student::setMarks(double m) {
    m_marks = m;
}

char* Student::getName() const {
    int size = 0;
    while (m_name[size] != '\0') size++;
    char* temp = new char[size + 1];
    for (int i = 0; i < size; i++) {
        temp[i] = m_name[i];
    }
    temp[size] = '\0';
    return temp;
}

int Student::getRollNo() const {
    return m_ROLL_NO;
}

double Student::getMarks() const {
    return m_marks;
}

Student Student::compareMarks(const Student& obj) const {
    if (this->m_marks > obj.m_marks) return *this;
    else return obj;
}

void Student::display() const {
    if (m_name == nullptr) {
        cout << "Name: N/A" << endl;
        return;
    }
    cout << "Name: " << getName() << endl;
    cout << "Roll No: " << getRollNo() << endl;
    cout << "Marks: " << getMarks() << endl;
}