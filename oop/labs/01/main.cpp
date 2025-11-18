#include <iostream>
#include <cstdlib>
using namespace std;

void swapValue();
void swapRefrence();
void stringLength();
void stringCopy();
void searchDelete();

int main() {
    int choice;
    do {
        system("cls");
        cout << "    ***** Menu *****" << endl;
        cout << "1. Swap (Call by Value)" << endl;
        cout << "2. Swap (Call by Reference)" << endl;
        cout << "3. String Length" << endl;
        cout << "4. String Copy" << endl;
        cout << "5. Search and Delete" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            swapValue();
            break;
        case 2:
            swapRefrence();
            break;
        case 3:
            stringLength();
            break;
        case 4:
            stringCopy();
            break;
        case 5:
            searchDelete();
            break;
        case 0:
            system("cls");
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            system("pause");
        }
    } while (choice != 0);
    return 0;
}