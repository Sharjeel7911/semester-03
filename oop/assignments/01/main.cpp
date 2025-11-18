#include <iostream>
using namespace std;
//g++ main.cpp task_1/*.cpp task_2/*.cpp -o x.exe && .\x.exe

void book();
void car();

int main() {
    int choice;
    do {
        system("cls");
        cout << " ***  Menu  *** " << endl;
        cout << "1. Book" << endl;
        cout << "2. Car" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice (1 - 2): ";
        cin >> choice;
        switch (choice) {
        case 1:
            book();
            break;
        case 2:
            car();
            break;
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 0 and 2" << endl;
            system("pause");
            break;
        }
    } while (choice != 0);
    return 0;
}