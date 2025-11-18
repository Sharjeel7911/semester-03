#include "../main.h"

class Student {
private:
    char* m_name;
    const int m_ROLL_NO;
    double m_marks;
public:
    Student();
    Student(const char*, int, double);
    Student(const Student& obj);
    ~Student();

    void setName(const char*);
    void setRollNo(int);
    void setMarks(double);

    char* getName() const;
    int getRollNo() const;
    double getMarks() const;

    Student compareMarks(const Student& obj) const;
    void display() const;


};