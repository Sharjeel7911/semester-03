#include <iostream>
using namespace std;

//g++ main.cpp task_1/*.cpp task_2/*.cpp task_3/*.cpp task_4/*.cpp task_5/*.cpp -o x.exe && .\x.exe

void counter();
void student();
void book();
void employee();
void calculator();

int main() {
    int choice;
    do {
        system("cls");
        cout << "                                 ***  Menu  *** " << endl;
        cout << "1. Counter" << "                       2. Student" << "                   3. Book" << endl;
        cout << "4. Employee" << "                      5. Calculator" << "                0. Exit" << endl;
        cout << endl << "Enter your choice (1 - 5): ";
        cin >> choice;
        switch (choice) {
        case 1:
            counter();
            break;
        case 2:
            student();
            break;
        case 3:
            book();
            break;
        case 4:
            employee();
            break;
        case 5:
            calculator();
            break;
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 7" << endl;
            system("pause");
            break;
        }
    } while (choice != 0);
    return 0;
}