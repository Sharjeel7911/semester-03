#include "Book.h"

void book() {
	system("cls");
	Book* ptr = new Book("Aag ka Darya", 0.0);
	ptr->display();
	cout << "Enter name" << endl;
	char* name = new char[20];
	cin.ignore();
	cin.getline(name, 20);
	cout << "Enter price" << endl;
	float price;
	cin >> price;

	ptr->setValues(name, price);

	ptr->display();
	system("pause");
	delete ptr;
}