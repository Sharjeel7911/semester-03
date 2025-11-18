#include "Employee.h"

void employee() {
	system("cls");
	cout << "How many Employees: ";
	int n;
	cin >> n;
	Employee* employees = new Employee[n];

	for (int i = 0; i < n; i++) {
		int id, salary;

		cout << "Enter id of Employee " << i + 1 << ": ";
		cin >> id;
		cout << "Enter salary: ";
		cin >> salary;

		Employee* ptr = &employees[i];

		ptr->setId(id);
		ptr->setSalary(salary);
	}

	system("cls");
	for (int i = 0; i < n; i++) {
		cout << "Details of student " << i + 1 << ": " << endl;
		Employee* ptr = &employees[i];
		ptr->display();
	}
	system("pause");

	delete[] employees;
}