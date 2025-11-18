#include <iostream>
#include <cstdlib>
using namespace std;

// Write a non-returning function swap which takes two integers as parameters by reference to swaps those integers. 

void swap(int &a, int &b);
void swapRefrence(){
    system("cls");
    int a = 0, b = 0;
    cout << "Enter A" << endl;
    cin >> a;
    cout << "Enter B" << endl;
    cin >> b;
    cout << "A before swap: " << a << ", B before swap: " << b << endl;
    swap(a, b);
    cout << "A after swap: " << a << ", B after swap: " << b << endl;
    system("pause");
}
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}