#include "Product.h"

void product() {
    system("cls");
    char* name = new char[20];
    double price;
    int quantity;
    cout << "Enter product 1 details:" << endl;
    cout << "Enter product name: ";
    cin >> name;
    cout << "Enter product price: ";
    cin >> price;
    cout << "Enter product quantity: ";
    cin >> quantity;
    Product p_1(name, price, quantity);

    cout << endl;
    cout << "Enter product 2 details:" << endl;
    cout << "Enter product name: ";
    cin >> name;
    cout << "Enter product price: ";
    cin >> price;
    cout << "Enter product quantity: ";
    cin >> quantity;

    Product p_2;
    p_2.setProductName(name);
    p_2.setPrice(price);
    p_2.setQuantity(quantity);

    Product p_3 = p_1;

    system("cls");

    //Values
    cout << "Product 1 Name: " << p_1.getProductName() << endl;
    cout << "Product 1 Price: " << p_1.getPrice() << endl;
    cout << "Product 1 Quantity: " << p_1.getQuantity() << endl;
    cout << endl;
    cout << "Product 2 Name: " << p_2.getProductName() << endl;
    cout << "Product 2 Price: " << p_2.getPrice() << endl;
    cout << "Product 2 Quantity: " << p_2.getQuantity() << endl;
    cout << endl;
    cout << "Product 3 Name (Copy of Product 1): " << p_3.getProductName() << endl;
    cout << "Product 3 Price (Copy of Product 1): " << p_3.getPrice() << endl;
    cout << "Product 3 Quantity (Copy of Product 1): " << p_3.getQuantity() << endl;
    system("pause");

    //Stock Value
    cout << "Total value of product 1 stock: " << p_1.totalValue() << endl;
    cout << "Total value of product 2 stock: " << p_2.totalValue() << endl;
    cout << "Total value of product 3 stock: " << p_3.totalValue() << endl;

    system("cls");
    //Restock 
    int restockAmount;
    cout << "Enter restock amount for product 1: ";
    cin >> restockAmount;
    p_1.restock(restockAmount);
    cout << endl;

    //Merge Products
    Product p_4 = p_1.mergeProduct(p_2);
    cout << "Merged Product Name: " << p_4.getProductName() << endl;
    cout << "Merged Product Price: " << p_4.getPrice() << endl;
    cout << "Merged Product Quantity: " << p_4.getQuantity() << endl;
    delete[] name;
    system("pause");
}