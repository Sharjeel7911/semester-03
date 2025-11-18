#include <iostream>
#include <cstdlib>
using namespace std;

// Write a non-returning function swap which takes two integers as parameters by value to swaps those integers.

void swapValue(int, int);
void swapRefrence(int &, int &);

void swap()
{
    system("cls");
    int a = 0, b = 0;
    cout << "Enter A" << endl;
    cin >> a;
    cout << "Enter B" << endl;
    cin >> b;
    cout << "Swap by Value" << endl;
    cout << "A before swap: " << a << ", B before swap: " << b << endl;
    swapValue(a, b);

    cout << "Swap by Refrence" << endl;
    cout << "A before swap: " << a << ", B before swap: " << b << endl;
    swapRefrence(a, b);
    cout << "A after swap: " << a << ", B after swap: " << b << endl;
    system("pause");
}

void swapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "A after swap: " << a << ", B after swap: " << b << endl;
    system("pause");
}
void swapRefrence(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
