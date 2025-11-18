#include "Book.h"

Book::Book() {
    m_title = nullptr;
    m_author = nullptr;
    m_category = nullptr;
    m_price = 0.0;
    m_quantity = 0;
}

Book::Book(const char* title, const char* author, const char* category, double price, int quantity) {
    m_title = new char[strlen(title) + 1];
    strcpy(m_title, title);

    m_author = new char[strlen(author) + 1];
    strcpy(m_author, author);

    m_category = new char[strlen(category) + 1];
    strcpy(m_category, category);

    m_price = price;
    m_quantity = quantity;
}

Book::~Book() {
    delete[] m_title;
    delete[] m_author;
    delete[] m_category;
}

void Book::setTitle(const char* title) {
    delete[] m_title;
    m_title = new char[strlen(title) + 1];
    strcpy(m_title, title);
}

void Book::setAuthor(const char* author) {
    delete[] m_author;
    m_author = new char[strlen(author) + 1];
    strcpy(m_author, author);
}

void Book::setCategory(const char* category) {
    delete[] m_category;
    m_category = new char[strlen(category) + 1];
    strcpy(m_category, category);
}

void Book::setPrice(double price) {
    m_price = price;
}

void Book::setQuantity(int quantity) {
    m_quantity = quantity;
}

char* Book::getTitle() {
    if (m_title == nullptr) return nullptr;
    char* temp = new char[strlen(m_title) + 1];
    strcpy(temp, m_title);
    return temp;
}

char* Book::getAuthor() {
    if (m_author == nullptr) return nullptr;
    char* temp = new char[strlen(m_author) + 1];
    strcpy(temp, m_author);
    return temp;
}

char* Book::getCategory() {
    if (m_category == nullptr) return nullptr;
    char* temp = new char[strlen(m_category) + 1];
    strcpy(temp, m_category);
    return temp;
}

double Book::getPrice() {
    return m_price;
}

int Book::getQuantity() {
    return m_quantity;
}

double Book::calculateDiscount(int disc) {
    return m_price - (m_price * disc / 100);
}

void Book::orderBook(int quantity) {
    if (quantity > m_quantity) {
        cout << "Not enough stock available! Only " << m_quantity << " books left." << endl;
        return;
    }

    cout << "Do you want to redeem discount? (y/n): " << endl;
    char choice;
    cin >> choice;

    double total = 0.0;
    if (choice == 'y' || choice == 'Y') {
        int disc;
        cout << "Enter discount percentage: ";
        cin >> disc;
        total = calculateDiscount(disc) * quantity;
    } else {
        total = m_price * quantity;
    }
    m_quantity -= quantity;
    cout << "Order placed successfully!" << endl;
    cout << "Total amount: " << total << endl;
    cout << "Remaining stock: " << m_quantity << endl;
}

void Book::printBook() {
    //This function can also get values without getters
    cout << "Title: " << getTitle() << endl;
    cout << "Author: " << getAuthor() << endl;
    cout << "Category: " << getCategory() << endl;
    cout << "Price: " << fixed << setprecision(3) << getPrice() << endl;
    cout << "Quantity: " << getQuantity() << endl;
}