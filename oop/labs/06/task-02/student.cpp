#include "Student.h"

Student::Student() {
	m_name = nullptr;
	m_marks = 0;
}

Student::Student(char* name, int m) {
	m_name = new char[strlen(name) + 1];
	for(int i = 0; i <= strlen(name); i++) m_name[i] = name[i];
	m_name[strlen(name)] = '\0';
	
	m_marks = m;
}

Student::~Student() {
	delete[] m_name;
}

void Student::setName(char* name) {
	if (m_name != nullptr) delete[] m_name;
	
	m_name = new char[strlen(name) + 1];
	for (int i = 0; i <= strlen(name); i++) m_name[i] = name[i];
	m_name[strlen(name)] = '\0';
}

void Student::setMarks(int m) {
	m_marks = m;
}

char* Student::getName() {
	char* temp = new char[strlen(m_name) + 1];
	for (int i = 0; i <= strlen(m_name); i++) temp[i] = m_name[i];
	temp[strlen(m_name)] = '\0';
	return temp;
}

int Student::getMarks() {
	return m_marks;
}

void Student::display() {
	cout << "Name: " << getName() << endl;
	cout << "Marks: " << getMarks() << endl;
}