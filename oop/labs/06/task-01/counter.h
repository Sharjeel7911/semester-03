#include <iostream>
using namespace std;

class Counter {
private:
	int m_count;
public:
	Counter();
	~Counter();

	void increment();
	void displayCount() const;

};