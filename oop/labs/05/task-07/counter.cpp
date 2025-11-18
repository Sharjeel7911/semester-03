#include "Counter.h"

Counter::Counter() {
    m_count = 0;
    cout << "Counter initialized to 0." << endl;
}

Counter::~Counter() {
    cout << "Counter destroyed." << endl;
}

void Counter::increment() {
    m_count++;
}

void Counter::displayCount() const {
    cout << "Current count: " << m_count << endl;
}