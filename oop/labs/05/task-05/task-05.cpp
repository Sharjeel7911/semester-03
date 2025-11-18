#include "StudentWithExtra.h"

void studentExtra() {
    system("cls");
    StudentWithExtra s1("Sharjeel", 1);
    StudentWithExtra s2("Ahmad", 2);

    const StudentWithExtra s3("Stheahrrjeeeeml", 3);

    cout << "Total Students: " << StudentWithExtra::getTotalStudents() << endl;
    cout << endl << "Student 1:" << endl;
    s1.display();
    cout << endl << "Student 2:" << endl;
    s2.display();
    cout << endl << "Student 3 (const):" << endl;
    s3.display();
    system("pause");
}