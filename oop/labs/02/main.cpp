#include <iostream>
#include <cstdlib>
using namespace std;

void swap();
void avgNum();
void findArea();
void areaRec();
void danglingAndMemoryLeakage();

int main()
{
    int choice;
    do
    {
        system("cls");
        cout << "    ***** Menu *****" << endl;
        cout << "1. Swap (Call by Value & Refrence)" << endl;
        cout << "2. Average of int and double" << endl;
        cout << "3. Area of Square, Triangle and Circle (Function Overloading)" << endl;
        cout << "4. Area of Rectangle (Function Overloading)" << endl;
        cout << "5. Dangling Pointer and Memory Leakage" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            swap();
            break;
        case 2:
            avgNum();
            break;
        case 3:
            findArea();
            break;
        case 4:
            areaRec();
            break;
        case 5:
            danglingAndMemoryLeakage();
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