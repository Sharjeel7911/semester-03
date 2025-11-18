#include "Car.h"

Car::Car() {
    brand = nullptr;
    model = nullptr;
    year = 0;
}

Car::~Car() {
    delete[] brand;
    delete[] model;
}

void Car::setValue(char* b, char* m, int y) {
    int size = 0;
    while (b[size] != '\0') size++;
    brand = new char[size + 1];
    for (int i = 0; i < size;i++) brand[i] = b[i];
    brand[size] = '\0';

    size = 0;
    while (m[size] != '\0') size++;
    model = new char[size + 1];
    for (int i = 0; i < size;i++)  model[i] = m[i];
    model[size] = '\0';

    year = y;

}

int Car::calculateCarAge(int currentYear) {
    return currentYear - year;
}

bool Car::isVintage(int currentYear) {
    return calculateCarAge(currentYear) > 20;
}

void Car::displayCarDetails() {
    cout << "Car Brand: " << brand << endl;
    cout << "Car Model: " << model << endl;
    cout << "Manufacturing Year: " << year << endl;
    cout << "Car Age: " << calculateCarAge(2025) << " years" << endl;
    if (isVintage(2025)) cout << "Car is Vintage" << endl;
    else cout << "Car is not Vintage" << endl;
}
