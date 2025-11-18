#include "../main.h"

class StudentWithExtra {
private:
    char* m_name;
    const int m_ROLL_NO;
    static int m_TOTAL_STUDENTS;
    static const int m_MAX_STUDENTS;
public:
    StudentWithExtra();
    StudentWithExtra(const char*, int);
    ~StudentWithExtra();

    void setName(const char*);
    static int getTotalStudents();
    void display() const;
};