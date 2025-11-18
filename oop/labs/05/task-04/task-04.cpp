#include "Employee.h"

void employee() {
    system("cls");
    Employee e0;
    Employee e1("Sharjeeel", 30, 95000.0);
    Employee e2("Ahmad", 45, 120000.0); //exceeds MAX_SALARY

    const Employee e3("stheahrrjeeeeml", 28, 85000.0);

    //e3.setSalary(110000.0); //will not change due to const
    cout << "Employee 0:" << endl;
    e0.display(); // default values
    cout << endl;
    cout << "Employee 1:" << endl;
    e1.display();
    cout << endl;
    cout << "Employee 2:" << endl;
    e2.display();
    cout << endl;
    cout << "Employee 3 (const):" << endl;
    e3.display();
    cout << endl;

    system("pause");
}