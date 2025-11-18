#include "Book.h"

Book::Book() {
	m_title = nullptr;
	m_price = 0.0;
}

Book::Book(const char* name, float price) {
	int size = 0;
	while (name[size] != '\0') size++;
	m_title = new char[size + 1];
	for (int i = 0; i < size; i++) m_title[i] = name[i];
	m_title[size] = '\0';
	m_price = price;
}

Book::~Book() {
	delete[]m_title;
}

void Book::setValues(const char* name, float price) {
	delete[]m_title;
	int size = 0;
	while (name[size] != '\0') size++;
	m_title = new char[size + 1];
	for (int i = 0; i < size; i++) m_title[i] = name[i];
	m_title[size] = '\0';
	m_price = price;
}

void Book::display() {
	cout << "Title: " << m_title << endl;
	cout << "Price: " << m_price << endl;
}