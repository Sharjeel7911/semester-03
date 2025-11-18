#include "Car.h"

Car::Car() {
    m_brand = new char[strlen("Unknown") + 1];
    strcpy(m_brand, "Unknown");

    m_model = new char[strlen("N/A") + 1];
    strcpy(m_model, "N/A");

    m_year = 0;
    m_price = 0.0;
}

Car::Car(const char* brand, const char* model, int year, double price) {
    m_brand = new char[strlen(brand) + 1];
    strcpy(m_brand, brand);

    m_model = new char[strlen(model) + 1];
    strcpy(m_model, model);

    m_year = year;
    m_price = price;
}

Car::~Car() {
    delete[] m_brand;
    delete[] m_model;
}

void Car::setValue(char* brand, char* model, int year, double price) {
    delete[] m_brand;
    m_brand = new char[strlen(brand) + 1];
    strcpy(m_brand, brand);

    delete[] m_model;
    m_model = new char[strlen(model) + 1];
    strcpy(m_model, model);

    m_year = year;
    m_price = price;
}

char* Car::getBrand() {
    if (m_brand == nullptr) return nullptr;
    char* temp = new char[strlen(m_brand) + 1];
    strcpy(temp, m_brand);
    return temp;
}

char* Car::getModel() {
    if (m_model == nullptr) return nullptr;
    char* temp = new char[strlen(m_model) + 1];
    strcpy(temp, m_model);
    return temp;
}

int Car::getYear() {
    return m_year;
}

double Car::getPrice() {
    return m_price;
}

void Car::display() {
    //This function can also get values without getters
    cout << "Brand: " << getBrand() << endl;
    cout << "Model: " << getModel() << endl;
    cout << "Year: " << getYear() << endl;
    cout << "Price: Rs. " << getPrice() << endl;
}