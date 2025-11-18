#include<iostream>
#include <cstdlib>
using namespace std;

class Car {
private:
    char* brand;
    char* model;
    int year;
public:
    Car();
    ~Car();

    void setValue(char*, char*, int);
    int calculateCarAge(int);
    bool isVintage(int);
    void displayCarDetails();
};