#include "Employee.h"

void employee() {
    system("cls");
    Employee e_1;

    cout << "Enter name: ";
    char* name = new char[20];
    cin.ignore();
    cin.getline(name, 20);
    e_1.setName(name);

    cout << "Enter ID: ";
    int id;
    cin >> id;
    e_1.setId(id);

    cout << "Enter Salary: ";
    double salary;
    cin >> salary;
    e_1.setSalary(salary);

    system("cls");

    cout << "Employee Details before Raise:" << endl;
    e_1.display();
    cout << endl;
    cout << "Enter raise percentage: ";
    double raisePercent;
    cin >> raisePercent;
    e_1.setPercentage(raisePercent);
    e_1.giveRaise(raisePercent);
    cout << endl;

    cout << "Employee Details after Raise:" << endl;
    e_1.display();
    system("pause");
}