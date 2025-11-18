#include "../main.h"

class Counter {
private:
    int m_value;
public:
    Counter(int value = 0);

    Counter& operator++();
    Counter operator++(int);

    Counter& operator--();
    Counter operator--(int);

    Counter operator+();
    Counter operator-();

    friend ostream& operator<<(ostream&, const Counter&);
    friend istream& operator>>(istream&, Counter&);
};