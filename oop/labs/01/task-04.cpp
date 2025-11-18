#include <iostream>
#include <cstdlib>
using namespace std;

/*
Write a non-returning function strCopy which takes only two char* as parameters, one is destination and other is source. Your task is to copy all the data of the source into destination.
Hint: You can use the strLength function of Task 3 to calculate the length of the source.
 void strCopy(char* &dest, const char* src);
NOTE: Be careful not to create a dangling pointer when copying the string. Make sure to allocate enough memory for the destination string and avoid using a pointer that has already been deleted.
*/

int strLengthx(const char* str);
void strCopy(char*& dest, const char* str);
void stringCopy() {
    system("cls");
    char* str= new char[100];
    cout << "Enter the source string: ";
    cin.ignore();
    cin.getline(str, 100);
    char* dest = nullptr;
    strCopy(dest, str);
    cout << "Source: " << str << endl;
    cout << "Destination: " << dest << endl;
    delete[] str;
    delete[] dest;
    system("pause");
}
int strLengthx(const char* str) {
    int length = 0;
    while (str[length] != '\0') length++;
    return length;
}
void strCopy(char*& dest, const char* str) {
    int length = strLengthx(str);
    dest = new char[length + 1]; 
    for (int i = 0; i < length; i++) {
        dest[i] = str[i]; 
    }
    dest[length] = '\0'; 
}