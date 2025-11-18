#include <iostream>
#include <cstdlib>
using namespace std;
//g++ main.cpp task-1/*.cpp task-2/*.cpp task-3/*.cpp task-4/*.cpp -o x.exe && .\x.exe

void rectangle();
void student();
void calculator();
void car();

int main() {
    int choice;
    do {
        system("cls");
        cout << "Menu: " << endl;
        cout << "1. Rectangle" << endl;
        cout << "2. Student" << endl;
        cout << "3. Calculator" << endl;
        cout << "4. Car" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) {
        case 1:
            rectangle();
            break;
        case 2:
            student();
            break;
        case 3:
            calculator();
            break;
        case 4:
            car();
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