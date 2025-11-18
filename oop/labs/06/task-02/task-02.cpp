#include "Student.h"

void student() {
	system("cls");
	cout << "How many Students: ";
	int n;
	cin >> n;
	Student* students = new Student[n];

	for (int i = 0; i < n; i++) {
		char* name = new char[20];
		int marks;

		cout << "Enter name of student " << i + 1 << ": ";
		cin.ignore();
		cin.getline(name, 20);
		
		cout << "Enter marks: ";
		cin >> marks;
		Student* ptr = &students[i];

		ptr->setName(name);
		ptr->setMarks(marks);
	}

	system("cls");
	for(int i = 0; i < n; i++) {
		cout << "Details of student " << i + 1 << ": " << endl;
		Student* ptr = &students[i];
		ptr->display();
	}
	system("pause");

	delete[] students;
}