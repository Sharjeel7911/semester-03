#include "Counter.h"

Counter::Counter(int value) {
    m_value = value;
}

Counter& Counter::operator++() {
    ++m_value;
    return *this;
}

Counter Counter::operator++(int) {
    Counter temp = *this;
    m_value++;
    return temp;
}

Counter& Counter::operator--() {
    --m_value;
    return *this;
}

Counter Counter::operator--(int) {
    Counter temp = *this;
    m_value--;
    return temp;
}

Counter Counter::operator+() {
    Counter temp;
    if (m_value < 0) temp.m_value = -m_value;
    else temp.m_value = m_value;

    return temp;
}

Counter Counter::operator-() {
    return Counter(-m_value);
}

ostream& operator<<(ostream& out, const Counter& obj) {
    out << obj.m_value;
    return out;
}

istream& operator>>(istream& in, Counter& obj) {
    cout << "Enter value" << endl;
    in >> obj.m_value;
    return in;
}