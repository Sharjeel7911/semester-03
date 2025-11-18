#include "BankAccount.h"    

void bankAccount() {
    system("cls");
    BankAccount b1("Sharjeel", 100.0);
    BankAccount b2;
    BankAccount b3 = b1; // Copy constructor

    cout << "Bank Account 1:" << endl;
    b1.display();
    cout << endl << "Bank Account 2:" << endl;
    b2.display();
    cout << endl << "Bank Account 3 (Copy of Account 1):" << endl;
    b3.display();

    b2.setName("Ahmad");
    b2.setBalance(1500.0);
    b2.deposit(500.0);
    cout << endl << "Bank Account 2 (After updates):" << endl;
    b2.display();

    system("pause");


}