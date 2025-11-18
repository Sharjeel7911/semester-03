#include "Product.h"

Product::Product() {
    m_productName = nullptr;
    m_price = 0.0;
    m_quantity = 0;
}

Product::Product(const char* name, double price, int quantity) {
    m_productName = new char[strlen(name) + 1];
    strcpy(m_productName, name);
    m_price = price;
    m_quantity = quantity;
}

Product::Product(const Product& obj) {
    m_productName = new char[strlen(obj.m_productName) + 1];
    strcpy(m_productName, obj.m_productName);
    m_price = obj.m_price;
    m_quantity = obj.m_quantity;
}

Product::~Product() {
    delete[] m_productName;
}

void Product::setProductName(const char* n) {
    delete[] m_productName;
    m_productName = new char[strlen(n) + 1];
    strcpy(m_productName, n);
}

void Product::setPrice(double price) {
    m_price = price;
}

void Product::setQuantity(int quantity) {
    m_quantity = quantity;
}

char* Product::getProductName() const {
    char* temp = new char[strlen(m_productName) + 1];
    strcpy(temp, m_productName);
    return temp;
}

double Product::getPrice() const {
    return m_price;
}

int Product::getQuantity() const {
    return m_quantity;
}

double Product::totalValue() const {
    return m_price * m_quantity;
}

void Product::restock(int amount) {
    m_quantity += amount;
    cout << "New quantity: " << m_quantity << endl;
}

double Product::maxPrice(double price1, double price2) const {
    if (price1 > price2) {
        return price1;
    } else {
        return price2;
    }
    return 0.0;
}

Product Product::mergeProduct(Product p) const {
    Product temp;
    int len1 = strlen(this->m_productName);
    int len2 = strlen(p.m_productName);
    int length = len1 + len2 + 1;

    temp.m_productName = new char[length + 1];
    strcpy(temp.m_productName, this->m_productName);
    temp.m_productName[len1] = ' ';
    strcpy(temp.m_productName + len1 + 1, p.m_productName);
    temp.m_productName[length] = '\0';

    temp.m_price = maxPrice(this->m_price, p.m_price);
    temp.m_quantity = this->m_quantity + p.m_quantity;
    return temp;
}