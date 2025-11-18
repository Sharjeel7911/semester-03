#include <iostream>
using namespace std;

class Book {
private:
	char* m_title;
	float m_price;
public:
	Book();
	Book(const char*, float);
	~Book();

	void setValues(const char*, float);
	void display();
};