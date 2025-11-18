#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
/*
You are designing a class Book for a library system. Each book has a title, author, price, Available Quantity, and Category of the book. You also need a function that calculates a discounted price, and Order a Book for purchase based on a given discount percentage. Make sure all data members should not be accessible for outer programing world. 1 constructor set all data member default values, and another should initialize it to fixed values
*/

class Book {
private:
    char* m_title;
    char* m_author;
    char* m_category;
    double m_price;
    int m_quantity;
public:
    Book();
    Book(const char*, const char*, const char*, double, int);
    ~Book();

    void setTitle(const char*);
    void setAuthor(const char*);
    void setCategory(const char*);
    void setPrice(double);
    void setQuantity(int);

    char* getTitle();
    char* getAuthor();
    char* getCategory();
    double getPrice();
    int getQuantity();

    void orderBook(int);
    double calculateDiscount(int);

    void printBook();
};