#include "../main.h"

class BankAccount {
private:
    char* m_name;
    const int m_ACCOUNT_NUMBER;
    double m_balance;

    static int m_TOTAL_ACCOUNTS;
    static const double m_MIN_BALANCE;
public:
    BankAccount();
    BankAccount(const char*, double);
    BankAccount(const BankAccount&);
    ~BankAccount();

    void setName(const char*);
    const char* getName() const;
    void setBalance(double);
    const double getBalance() const;

    void deposit(double);
    static int getTotalAccounts();
    void display() const;
};