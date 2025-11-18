#include "BankAccount.h"

int BankAccount::m_TOTAL_ACCOUNTS = 1;
const double BankAccount::m_MIN_BALANCE = 500.0;

BankAccount::BankAccount() : m_ACCOUNT_NUMBER(m_TOTAL_ACCOUNTS++) {
    m_name = nullptr;
    m_balance = m_MIN_BALANCE;
}

BankAccount::BankAccount(const char* name, double balance) : m_ACCOUNT_NUMBER(m_TOTAL_ACCOUNTS++) {
    setName(name);
    if (balance >= m_MIN_BALANCE) setBalance(balance);
    else setBalance(m_MIN_BALANCE);
}

BankAccount::BankAccount(const BankAccount& obj) : m_ACCOUNT_NUMBER(m_TOTAL_ACCOUNTS++) {
    m_name = new char[strlen(obj.m_name) + 1];
    strcpy(m_name, obj.m_name);
    this->m_balance = obj.m_balance;
}

BankAccount::~BankAccount() {
    delete[] m_name;
}

void BankAccount::setName(const char* n) {
    delete[] m_name;
    int size = 0;
    while (n[size] != '\0') size++;
    m_name = new char[size + 1];
    for (int i = 0; i < size; i++) {
        m_name[i] = n[i];
    }
    m_name[size] = '\0';
}

void BankAccount::setBalance(double balance) {
    m_balance = balance;
}

const char* BankAccount::getName() const {
    char* temp = new char[strlen(m_name) + 1];
    strcpy(temp, m_name);
    return temp;
}

const double BankAccount::getBalance() const {
    return m_balance;
}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        m_balance += amount;
    }
}

int BankAccount::getTotalAccounts() {
    return m_TOTAL_ACCOUNTS;
}

void BankAccount::display() const {
    if (m_name == nullptr) {
        cout << "Account Holder Name: N/A" << endl;
        cout << "Account Balance: N/A" << endl;
        return;
    }
    cout << "Account Number: " << m_ACCOUNT_NUMBER << endl;
    cout << "Account Holder Name: " << m_name << endl;
    cout << "Account Balance: Rs. " << m_balance << endl;
}