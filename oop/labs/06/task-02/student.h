#include <iostream>
using namespace std;

class Student {
private:
	char* m_name;
	int m_marks;
public:
	Student();
	Student(char*, int);
	~Student();

	void setName(char*);
	void setMarks(int);

	char* getName();
	int getMarks();

	void display();
};