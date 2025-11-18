#include "StudentWithExtra.h"

int StudentWithExtra::m_TOTAL_STUDENTS = 0;
const int StudentWithExtra::m_MAX_STUDENTS = 100;

StudentWithExtra::StudentWithExtra() : m_ROLL_NO(0) {
    m_name = nullptr;
    m_TOTAL_STUDENTS++;
}

StudentWithExtra::StudentWithExtra(const char* name, int rollNo) : m_ROLL_NO(rollNo) {
    setName(name);
    m_TOTAL_STUDENTS++;
}

StudentWithExtra::~StudentWithExtra() {
    delete[] m_name;
    m_TOTAL_STUDENTS--;
}

int StudentWithExtra::getTotalStudents() {
    return m_TOTAL_STUDENTS;
}

void StudentWithExtra::setName(const char* n) {
    delete[] m_name;
    int size = 0;
    while (n[size] != '\0') size++;
    m_name = new char[size + 1];
    for (int i = 0; i < size; i++) {
        m_name[i] = n[i];
    }
    m_name[size] = '\0';
}

void StudentWithExtra::display() const {
    if (m_name != nullptr) cout << "Name: " << m_name << ", Roll No: " << m_ROLL_NO << endl;
    else cout << "Name: N/A, Roll No: N/A" << endl;
}