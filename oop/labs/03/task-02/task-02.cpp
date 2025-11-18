#include"Student.h"

void student() {
    system("cls");
    Student s_1;
    cout << "Enter name: ";
    char* name = new char[20];
    cin.ignore();
    cin.getline(name, 20);
    s_1.setName(name);
    delete[] name;

    cout << "Enter ID: ";
    int id;
    cin >> id;
    s_1.setId(id);

    cout << "Enter GPA: ";
    double gpa;
    cin >> gpa;
    s_1.setGpa(gpa);

    cout << "Enter Degree: ";
    char* degree = new char[20];
    cin.ignore();
    cin.getline(degree, 20);
    s_1.setDegree(degree);
    delete[] degree;

    double totalMarks, obtainedMarks;
    cout << "Enter total marks: ";
    cin >> totalMarks;
    cout << "Enter obtained marks: ";
    cin >> obtainedMarks;
    s_1.setMarks(obtainedMarks, totalMarks);

    s_1.display();
    system("pause");
}