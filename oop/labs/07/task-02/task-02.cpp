#include "Student.h"

void student() {
    clearScreen();
    Student s1;
    cin >> s1;
    Student s2;
    cin >> s2;

    Student s3 = s1; //copy constructor
    Student s4;
    s4 = s2; //assignment operator
    clearScreen();

    if (s1 == s2) cout << "Student 1 is same as Student 2" << endl;
    else if (s1 != s2) cout << "Student 1 is not same as Student 2" << endl;

    if (s3 >= s4) cout << "Student 3 has higher or equal to gpa than Student 4" << endl;
    else if (s3 <= s4) cout << "Student 3 has equal to or lower gpa than Student 4" << endl;

    cout << endl << "Displaying Information" << endl << endl;
    cout << s1 << endl << s2 << endl << s3 << endl << s4 << endl;
    pauseScreen();
}