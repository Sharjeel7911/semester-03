#include <iostream>
#include <cstdlib>
using namespace std;

//Write a returning function strLength which takes only one char* as parameter and returns the length of the array. Its prototype should be:  int strLength(const char* src);

int strLength(const char* src);
void stringLength(){
    system("cls");
    char* str = new char[100];
    cout << "Enter the string: ";
    cin.ignore();
    cin.getline(str, 100);
    int length = strLength(str);
    cout << "The length of the given string is: " << length << endl;
    delete[] str;
    system("pause");
}
int strLength(const char* str){
    int length = 0;
    while (str[length] != '\0') length++;
    return length;
}