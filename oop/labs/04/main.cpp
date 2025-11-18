#include <iostream>
using namespace std;
//g++ main.cpp task-1/*.cpp task-2/*.cpp task-3/*.cpp task-4/*.cpp -o x.exe && .\x.exe

void complexNumber();
void time();
void circle();
void employee();

int main() {
    int choice;
    do {
        system("cls");
        cout << " ***  Menu  *** " << endl;
        cout << "1. Complex Number" << endl;
        cout << "2. Time" << endl;
        cout << "3. Circle" << endl;
        cout << "4. Employee" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) {
        case 1:
            complexNumber();
            break;
        case 2:
            time();
            break;
        case 3:
            circle();
            break;
        case 4:
            employee();
            break;
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 5" << endl;
            system("pause");
            break;
        }
    } while (choice != 0);
    return 0;
}