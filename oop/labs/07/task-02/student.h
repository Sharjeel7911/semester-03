#include "../main.h"

class Student {
private:
    char* m_name;
    int m_rollNo;
    float m_gpa;
public:
    Student(char* name = nullptr, int rollNo = 0, float gpa = 0.0);
    Student(const Student&);
    ~Student();
    Student& operator=(const Student&);

    void setName(char*);
    bool cmpStrings(char*, char*) const;

    bool operator==(const Student&);
    bool operator!=(const Student&);
    bool operator>=(const Student&);
    bool operator<=(const Student&);

    friend ostream& operator<<(ostream&, const Student&);
    friend istream& operator>>(istream&, Student&);
};