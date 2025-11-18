#include "Car.h"

void car() {
    system("cls");
    Car c_1;
    cout << "Enter car brand: ";
    char* brand = new char[20];
    cin.ignore();
    cin.getline(brand, 20);

    cout << "Enter car model: ";
    char* model = new char[20];
    cin.getline(model, 20);

    int year;
    cout << "Enter manufacturing year: ";
    cin >> year;
    c_1.setValue(brand, model, year);

    delete[] model;
    delete[] brand;

    c_1.displayCarDetails();
    system("pause");
}