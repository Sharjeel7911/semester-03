#include "Student.h"

void student() {
    system("cls");
    Student s1("Sharjeel", 1, 85.5);
    Student s2 = s1;

    char* name = new char[50];
    int rollNo;
    double marks;

    cout << "Enter details for student 3:" << endl;
    cout << "Name: ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "Roll No: ";
    cin >> rollNo;
    cout << "Marks: ";
    cin >> marks;
    Student s3(name, rollNo, marks);

    system("cls");
    cout << "Student 1 details:" << endl;
    s1.display();
    cout << endl << "Student 2 details (copied from Student 1):" << endl;
    s2.display();
    cout << endl << "Student 3 details:" << endl;
    s3.display();
    system("pause");

    system("cls");
    Student topStudent = s1.compareMarks(s3);
    cout << "Top scorer details:" << endl;
    topStudent.display();

    delete[] name;
    system("pause");
}