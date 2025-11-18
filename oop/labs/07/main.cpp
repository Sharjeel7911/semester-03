#include "main.h"

//MY FIRST CODE ON LINUX VIA VS CODE(WSL)
//g++ main.cpp task-01/*.cpp task-02/*.cpp task-03/*.cpp -o x && ./x

//NOTE: I DID TASK 4 IN TASK 2
void complexNum();
void student();
void counter();

int main() {
    int choice;
    do {
        clearScreen();
        cout << "                                           ***  Menu  *** " << endl << endl;
        cout << "1. Complex Number               2. Student               3. Counter               0. Exit" << endl;
        cout << endl << "Enter your choice (1 - 3): ";
        cin >> choice;
        switch (choice) {
        case 1:
            complexNum();
            break;
        case 2:
            student();
            break;
        case 3:
            counter();
            break;
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 4" << endl;
            pauseScreen();
            break;
        }
    } while (choice != 0);
    return 0;
}