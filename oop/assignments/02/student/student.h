#include "main.h"

class Student;

class Student {
private:
    int m_id;
    char* m_name;
    int m_age;
    double m_gpa;
    const int m_UNIQUE_ID;
    static int m_TOTAL_STUDENTS;
public:
    Student(char* name = nullptr, int id = 0, int age = 0, float gpa = 0.0);
    ~Student();

    Student(const Student&);
    Student& operator=(const Student&);

    void setName(const char* name);
    char* cleanString(const char*);
    void setId(int id);
    void setAge(int age);
    void setGpa(float gpa);

    void toCsv() const;
    void toBin() const;



    friend void searchById();
    friend void searchByName();
    friend ostream& operator<<(ostream&, const Student&);
    friend istream& operator>>(istream&, Student&);


};