#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
/*
Write a class Car that has:
•	Data members: brand, model, and price.
•	A default constructor that sets default values ("Unknown", "N/A", 0).
•	Constructor Overloads take all values
•	A function display() that shows all details.
Task:
1.	Create two objects: one using the default constructor and another using a parameterized constructor.
2.	Display both cars’ details.
3.	Use getter and setter function to set and get the car attributes values.
*/

class Car {
private:
    char* m_brand;
    char* m_model;
    int m_year;
    double m_price;
public:
    Car();
    Car(const char*, const char*, int, double);
    ~Car();

    void setValue(char*, char*, int, double);
    char* getBrand();
    char* getModel();
    int getYear();
    double getPrice();
    void display();
};