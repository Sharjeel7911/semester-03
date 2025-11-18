#include "main.h"

//g++ main.cpp task-1/*.cpp task-2/*.cpp task-3/*.cpp task-4/*.cpp task-5/*.cpp task-6/*.cpp task-7/*.cpp -o x.exe && .\x.exe

void rectangle();
void product();
void student();
void employee();
void studentExtra();
void bankAccount();
void counter();

int main() {
    int choice;
    do {
        system("cls");
        cout << "                                 ***  Menu  *** " << endl;
        cout << "1. Rectangle" << "                       2. Product" << "                   3. Student" << endl;
        cout << "4. Employee" << "                        5. Student Extra" << "             6. Bank Account" << endl;
        cout << "                                   7. Counter" << endl;
        cout << "                                   0. Exit" << endl;
        cout << endl << "Enter your choice (1 - 7): ";
        cin >> choice;
        switch (choice) {
        case 1:
            rectangle();
            break;
        case 2:
            product();
            break;
        case 3:
            student();
            break;
        case 4:
            employee();
            break;
        case 5:
            studentExtra();
            break;
        case 6:
            bankAccount();
            break;
        case 7:
            counter();
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