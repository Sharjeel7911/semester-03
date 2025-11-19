#include "main.h"
#include "student.h"

void searchById();
void searchByName();

void createStudent();
void readStudent();
void updateStudent();
void deleteStudent();


void loadfromCsv();
void loadfromBin();

int main() {
    clearScreen();
    int choice;

    do {
        clearScreen();
        cout << "                                                          ~~~  MENU  ~~~ " << endl << endl;
        cout << "1. Create Student                    2. Read Student                       3. Update Student                    4. Delete Student " << endl << endl;
        cout << "                                     5. Display from CSV                   6. Display from BIN" << endl << endl;
        cout << "                                                             0. Exit              " << endl << endl;
        cout << "Enter you choice (1 - 6): ";
        cin >> choice;

        switch (choice) {
        case 1:
            createStudent();
            break;
        case 2:
            readStudent();
            break;
        case 3:
            updateStudent();
            break;
        case 4:
            deleteStudent();
            break;
        case 5:
            loadfromCsv();
            break;
        case 6:
            loadfromBin();
            break;
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 9" << endl;
            pauseScreen();
            break;
        }
    } while (choice != 0);
    return 0;
}



void createStudent() {
    clearScreen();
    Student st;
    cin >> st;

    st.toCsv();
    st.toBin();

    cout << "Student added to database" << endl;
    pauseScreen();
}

void readStudent() {
    clearScreen();
    int choice;
    cout << "Search by:\n1. Roll Number\n2. Name\nEnter choice: ";
    cin >> choice;

    if (choice == 1)
        searchById();
    else if (choice == 2)
        searchByName();
    else
        cout << "Invalid choice!" << endl;
}

void searchById() {
    clearScreen();
    int searchRoll;
    cout << "Enter roll number to search: ";
    cin >> searchRoll;

    ifstream read("students.csv");
    if (!read) {
        cout << "CSV file not found!" << endl;
        return;
    }

    cout << left << setw(10) << "RollNo" << setw(20) << "Name" << setw(5) << "Age" << setw(5) << "GPA" << endl;
    cout << "----------------------------------------" << endl;

    int found = 0;
    int totalStudents = Student::m_TOTAL_STUDENTS;

    for (int i = 0; i < totalStudents; i++) {
        int unique_id, rollNo, age;
        char name[50];
        float gpa;

        if (!(read >> unique_id)) break;
        read.ignore(1, ',');

        read >> rollNo;
        if (rollNo != searchRoll) {
            read.ignore(200, '\n');
            continue;
        }

        read.ignore(1, ',');
        read.getline(name, 50, ',');
        read >> age;
        read.ignore(1, ',');
        read >> gpa;
        read.ignore(200, '\n');

        cout << left << setw(10) << rollNo << setw(20) << name << setw(5) << age << setw(5) << gpa << endl;
        found = 1;
        break;
    }

    if (!found)
        cout << "No student found with roll number " << searchRoll << endl;

    read.close();
    pauseScreen();
}

void searchByName() {
    clearScreen();

    char searchName[50];
    cout << "Enter name to search (first or last, case-insensitive): ";
    cin.ignore();
    cin.getline(searchName, 50);

    // convert searchName to lowercase
    for (int i = 0; searchName[i]; i++)
        if (searchName[i] >= 'A' && searchName[i] <= 'Z')
            searchName[i] += 32;

    ifstream read("students.csv");
    if (!read) {
        cout << "CSV file not found!" << endl;
        return;
    }

    cout << left << setw(10) << "RollNo" << setw(20) << "Name" << setw(5) << "Age" << setw(5) << "GPA" << endl;
    cout << "----------------------------------------" << endl;

    int found = 0;
    int totalStudents = Student::m_TOTAL_STUDENTS;

    for (int i = 0; i < totalStudents; i++) {
        int unique_id, rollNo, age;
        char name[50];
        float gpa;

        if (!(read >> unique_id)) break;
        read.ignore(1, ',');

        read >> rollNo;
        read.ignore(1, ',');

        read.getline(name, 50, ',');
        read >> age;
        read.ignore(1, ',');
        read >> gpa;
        read.ignore(200, '\n');

        //convert name from file to lowercase
        char nameLower[50];
        int j = 0;
        while (name[j] != '\0') {
            if (name[j] >= 'A' && name[j] <= 'Z')
                nameLower[j] = name[j] + 32;
            else
                nameLower[j] = name[j];
            j++;
        }
        nameLower[j] = '\0';

        //simple match
        int searchLen = 0;
        while (searchName[searchLen] != '\0') searchLen++;
        int nameLen = 0;
        while (nameLower[nameLen] != '\0') nameLen++;

        bool match = false;
        for (int k = 0; k <= nameLen - searchLen; k++) {
            bool ok = true;
            for (int l = 0; l < searchLen; l++) {
                if (nameLower[k + l] != searchName[l]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                match = true;
                break;
            }
        }

        if (match) {
            cout << setw(10) << rollNo << setw(20) << name << setw(5) << age << setw(5) << gpa << endl;
            found = 1;
        }
    }

    if (!found)
        cout << "No student found matching '" << searchName << "'" << endl;

    read.close();
    pauseScreen();
}




void updateStudent() {

}

void deleteStudent() {

}

void loadfromCsv() {

}

void loadfromBin() {

}