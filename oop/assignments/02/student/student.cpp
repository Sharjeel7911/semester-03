#include "student.h"
#include "main.h"

int Student::m_TOTAL_STUDENTS = 0;

//input operator
istream& operator>>(istream& in, Student& obj) {
    char name[30] = {};
    cout << "Enter new Student's name" << endl;
    in.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear buffer
    in.getline(name, 30);
    obj.setName(name);

    int id;
    cout << "Enter roll number: ";
    in >> id;
    obj.setId(id);

    int age;
    cout << "Enter age: ";
    in >> age;
    obj.setAge(age);

    float gpa;
    cout << "Enter GPA: ";
    in >> gpa;
    obj.setGpa(gpa);

    return in;
}

//output operator
ostream& operator<<(ostream& out, const Student& obj) {
    out << "Name: " << obj.m_name << endl;
    out << "Roll Number: " << obj.m_id << endl;
    out << "Age: " << obj.m_age << endl;
    out << "Gpa: " << obj.m_gpa;
    return out;
}

//constructer
Student::Student(char* name, int rollNo, int age, float gpa) : m_name(nullptr), m_UNIQUE_ID(++m_TOTAL_STUDENTS), m_id(rollNo), m_age(age), m_gpa(gpa) {
    if (name) setName(name);
    else {
        m_name = new char[1];
        m_name[0] = '\0';
    }
}

//destructer
Student::~Student() {
    delete[] m_name;
    m_TOTAL_STUDENTS--;
}

//copy constructer
Student::Student(const Student& obj) : m_UNIQUE_ID(++m_TOTAL_STUDENTS) {
    setName(obj.m_name);
    m_id = obj.m_id;
    m_age = obj.m_age;
    m_gpa = obj.m_gpa;
}

//assignment operator
Student& Student::operator=(const Student& obj) {
    if (this != &obj) {
        setName(obj.m_name);
        m_id = obj.m_id;
        m_age = obj.m_age;
        m_gpa = obj.m_gpa;
    }
    return *this;
}

//student public functions

char* Student::cleanString(const char* s) {
    if (s == nullptr) {
        char* empty = new char[1];
        empty[0] = '\0';
        return empty;
    }

    // Skip leading spaces, commas, dots
    int start = 0;
    while (s[start] == ' ' || s[start] == ',' || s[start] == '.') start++;

    // Find end
    int end = start;
    while (s[end] != '\0') end++;
    end--;

    // Remove trailing spaces/commas/dots
    while (end >= start && (s[end] == ' ' || s[end] == ',' || s[end] == '.')) end--;

    if (start > end) {
        char* empty = new char[1];
        empty[0] = '\0';
        return empty;
    }

    int size = end - start + 1;
    char* out = new char[size + 1];
    int j = 0;

    int letterCount = 0; // count letters for validation

    for (int i = start; i <= end; i++) {
        char ch = s[i];
        if ((ch >= '0' && ch <= '9') || ch == ',' || ch == '.') continue; // skip numbers & punctuation
        out[j++] = ch;
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) letterCount++;
        else if (ch == ' ') out[j++] = ' ';
    }

    out[j] = '\0';

    // if less than 3 letters → invalid
    if (letterCount < 3) {
        delete[] out;
        char* empty = new char[1];
        empty[0] = '\0';
        return empty;
    }

    return out;
}

void Student::setName(const char* name) {
    char* clean = cleanString(name);

    while (clean[0] == '\0') {
        delete[] clean;

        cout << "Invalid name! Enter again (at least 3 letters, no numbers/punctuation): " << endl;
        char temp[50];
        cin.ignore();
        cin.getline(temp, 50);

        clean = cleanString(temp);
    }

    if (m_name) delete[] m_name;

    int size = 0;
    while (clean[size] != '\0') size++;
    m_name = new char[size + 1];
    for (int i = 0; i < size; i++) m_name[i] = clean[i];
    m_name[size] = '\0';

    delete[] clean;
}



void Student::setId(int id) {
    while (id <= 0) {
        cout << "Invalid ID (must be > 0). Enter again: ";
        cin >> id;
    }
    m_id = id;
}

void Student::setAge(int age) {
    while (age < 16 || age > 25) {
        cout << "Invalid age (must be betwqeen 16 asnd 25). Enter again: ";
        cin >> age;
    }
    m_age = age;
}

void Student::setGpa(float gpa) {
    while (gpa < 0.0 || gpa > 4.0) {
        cout << "Invalid GPA (0-4). Enter again: ";
        cin >> gpa;
    }
    m_gpa = gpa;
}

void Student::toCsv() const {
    ofstream write("students.csv", ios::app);
    if (!write) {
        cout << "Error opening CSV file!" << endl;
        return;
    }
    write << m_UNIQUE_ID << "," << m_id << "," << m_name << "," << m_age << "," << m_gpa << endl;
    write.close();
}

void Student::toBin() const {
    ofstream write("students.bin", ios::app | ios::binary);
    if (!write) {
        cout << "Error opening binary file!" << endl;
        return;
    }

    write.write((char*)&m_UNIQUE_ID, sizeof(m_UNIQUE_ID));
    write.write((char*)&m_id, sizeof(m_id));

    int len = 0;
    while (m_name[len] != '\0') len++;
    write.write((char*)&len, sizeof(len));
    write.write(m_name, len);

    write.write((char*)&m_age, sizeof(m_age));
    write.write((char*)&m_gpa, sizeof(m_gpa));
    write.close();
}




