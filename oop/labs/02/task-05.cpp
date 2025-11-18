#include <iostream>
#include <cstdlib>
using namespace std;

void danglingPtr(int *arr, int size);
void memoryLeakage();

void danglingAndMemoryLeakage()
{
    system("cls");
    int size = 5;
    int *arr = new int[5];
    cout << "Enter 5 elements: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    danglingPtr(arr, size);
    memoryLeakage();
    system("pause");
}

void danglingPtr(int *arr, int size)
{
    cout << "The elements before deletion: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    cout << "Accessing dangling pointer: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr = nullptr; // Avoid dangling pointer
}
void memoryLeakage()
{
    int *arr = new int[5];
    cout << "Memory allocated for 5 integers" << endl;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    cout << "Exiting function without deleting allocated memory." << endl;
}
