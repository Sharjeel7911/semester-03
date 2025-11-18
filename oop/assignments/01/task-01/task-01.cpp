#include "Book.h"

void book() {
    system("cls");

    Book b_1("Udaas Naslen", "Abdullah Hussain", "Fiction", 500, 20);
    Book b_2;

    cout << "Enter book title" << endl;
    char* title = new char[20];
    cin.ignore();
    cin.getline(title, 20);
    b_2.setTitle(title);

    cout << "Enter book author" << endl;
    char* author = new char[20];
    cin.getline(author, 20);
    b_2.setAuthor(author);

    cout << "Enter book category" << endl;
    char* category = new char[20];
    cin.getline(category, 20);
    b_2.setCategory(category);

    cout << "Enter book price" << endl;
    double price;
    cin >> price;
    b_2.setPrice(price);

    cout << "Enter book quantity" << endl;
    int quantity;
    cin >> quantity;
    b_2.setQuantity(quantity);
    system("cls");
    cout << "Book 1 with parameterized constructor: " << endl;
    b_1.printBook();
    cout << endl << "Book 2 with default constructor: " << endl;
    b_2.printBook();

    cout << "How many books do you want to order? " << endl;
    int n;
    cin >> n;
    b_2.orderBook(n);

    system("pause");
}