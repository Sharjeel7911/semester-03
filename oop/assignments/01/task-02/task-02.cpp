#include "Car.h"

void car() {
    system("cls");
    Car c_1("Mercedes", "Benz", 2022, 1000000);
    Car c_2;

    cout << "Car 1 with parameterized constructor: " << endl;
    c_1.display();
    cout << endl << "Car 2 with default constructor: " << endl;
    c_2.display();
    system("pause");

    char* brand = new char[20];
    char* model = new char[20];
    int year = 0;
    double price = 0;

    cout << endl << "Enter car brand: " << endl;
    cin.ignore();
    cin.getline(brand, 20);
    cout << "Enter car model: " << endl;
    cin.getline(model, 20);
    cout << "Enter car year: " << endl;
    cin >> year;
    cout << "Enter car price: " << endl;
    cin >> price;

    c_2.setValue(brand, model, year, price);

    cout << endl << "Car 2 with updated values: " << endl;
    c_2.display();

    system("pause");
}