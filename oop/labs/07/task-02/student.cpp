#include "Student.h"

Student::Student(char* name, int rollNo, float gpa) : m_name(nullptr) {
    setName(name);
    m_rollNo = rollNo;
    m_gpa = gpa;
}

Student::Student(const Student& obj) : m_name(nullptr) {
    this->setName(obj.m_name);
    this->m_rollNo = obj.m_rollNo;
    this->m_gpa = obj.m_gpa;
}

Student::~Student() {
    if (m_name) delete[]m_name;
}

Student& Student::operator=(const Student& obj) {
    if (this != &obj) {
        delete[] m_name;
        setName(obj.m_name);
        m_rollNo = obj.m_rollNo;
        m_gpa = obj.m_gpa;
    }
    return *this;
}

bool Student::operator==(const Student& obj) {
    if (cmpStrings(this->m_name, obj.m_name) && this->m_rollNo == obj.m_rollNo && this->m_gpa == obj.m_gpa)
        return true;
    return false;
}

bool Student::operator!=(const Student& obj) {
    if (!cmpStrings(this->m_name, obj.m_name) || this->m_rollNo == obj.m_rollNo || this->m_gpa == obj.m_gpa)
        return true;
    return false;
}

bool Student::operator>=(const Student& obj) {
    if (this->m_gpa >= obj.m_gpa) return true;
    else return false;
}

bool Student::operator<=(const Student& obj) {
    if (this->m_gpa <= obj.m_gpa) return true;
    else return false;
}

ostream& operator<<(ostream& out, const Student& obj) {
    out << "Name: " << obj.m_name << endl;
    out << "Roll Number: " << obj.m_rollNo << endl;
    out << "Gpa: " << obj.m_gpa;
    return out;
}

istream& operator>>(istream& in, Student& obj) {
    char name[20];
    cout << "Enter name" << endl;
    cin.ignore();
    in.getline(name, 20);
    obj.setName(name);

    cout << "Enter roll number" << endl;
    in >> obj.m_rollNo;

    cout << "Enter gpa" << endl;
    in >> obj.m_gpa;
    return in;
}

void Student::setName(char* name) {
    if (m_name) delete[] m_name;
    if (!name) {
        m_name = nullptr;
        return;
    }
    int size = 0;
    while (name[size] != '\0') size++;
    m_name = new char[size + 1];
    for (int i = 0; i < size; i++) m_name[i] = name[i];
    m_name[size] = '\0';
}

bool Student::cmpStrings(char* a, char* b) const {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return false;
        i++;
    }
    return a[i] == b[i];
}