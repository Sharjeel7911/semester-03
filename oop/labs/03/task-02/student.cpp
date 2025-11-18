#include "Student.h"

Student::Student() {
    name = nullptr;
    id = 0;
    gpa = 0.0;
    degree = nullptr;
}

Student::~Student() {
    if (name != nullptr) {
        delete[] name;
    }
    if (degree != nullptr) {
        delete[] degree;
    }
}

void Student::setName(const char* n) {
    int size = 0;
    while (n[size] != '\0') size++;
    name = new char[size + 1];
    for (int i = 0; i < size; i++) {
        name[i] = n[i];
    }
    name[size] = '\0';
}

void Student::setId(int i) {
    id = i;
}

void Student::setGpa(double g) {
    gpa = g;
}

void Student::setDegree(const char* d) {
    int size = 0;
    while (d[size] != '\0') size++;
    degree = new char[size + 1];
    for (int i = 0; i < size; i++) {
        degree[i] = d[i];
    }
    degree[size] = '\0';
}

void Student::setMarks(int o, int t) {
    obtainedMarks = o;
    totalMarks = t;
}

double Student::calculatePercentage(double obtainedMarks, double totalMarks) {
    if (totalMarks == 0) return 0;
    return ((obtainedMarks) / totalMarks) * 100.0;
}

void Student::assignGrade(double percentage) {
    if (percentage >= 86 && percentage <= 100) cout << "Grade: A+" << endl;
    else if (percentage >= 82 && percentage <= 85) cout << "Grade: A" << endl;
    else if (percentage >= 78 && percentage <= 81) cout << "Grade: B+" << endl;
    else if (percentage >= 74 && percentage <= 77) cout << "Grade: B" << endl;
    else if (percentage >= 70 && percentage <= 73) cout << "Grade: B-" << endl;
    else if (percentage >= 66 && percentage <= 69) cout << "Grade: C+" << endl;
    else if (percentage >= 62 && percentage <= 65) cout << "Grade: C" << endl;
    else if (percentage >= 58 && percentage <= 61) cout << "Grade: C-" << endl;
    else if (percentage >= 54 && percentage <= 57) cout << "Grade: D+" << endl;
    else if (percentage >= 50 && percentage <= 53) cout << "Grade: D" << endl;
    else if (percentage < 50) cout << "Grade: F" << endl;
    else cout << "Invalid percentage value!" << endl;
}

void Student::display() {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Degree: " << degree << endl;
    cout << "Percentage: " << calculatePercentage(obtainedMarks, totalMarks) << "%" << endl;
    cout << "Grade: ";
    assignGrade(calculatePercentage(obtainedMarks, totalMarks));
}