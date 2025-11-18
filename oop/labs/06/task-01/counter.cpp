#include "Counter.h"

Counter::Counter() {
	cout << "Counter initilized" << endl;
	m_count = 0;
}

Counter::~Counter() {
	cout << "Counter destroyed" << endl;
}

void Counter::increment() {
	m_count++;
}

void Counter::displayCount() const {
	cout << "Call " << m_count << " to perform task" << endl;
	cout << "Current count: " << m_count << endl;
}