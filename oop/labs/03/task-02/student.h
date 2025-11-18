#include<iostream>
#include<cstdlib>
using namespace std;

class Student {
private:
    char* name;
    int id;
    double gpa;
    char* degree;
    double obtainedMarks;
    double totalMarks;
public:
    Student(); //Constructor
    ~Student(); //Destructor

    void setName(const char*);
    void setId(int);
    void setGpa(double);
    void setDegree(const char*);
    double calculatePercentage(double, double);
    void assignGrade(double percentage);
    void setMarks(int, int);
    void display();
};