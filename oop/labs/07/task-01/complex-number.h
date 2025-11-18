#include "../main.h"

class ComplexNumber {
private:
    int m_real;
    int m_imaginary;
public:
    ComplexNumber(int real = 0, int imaginary = 0);
    ComplexNumber(const ComplexNumber&);

    ComplexNumber& operator=(const ComplexNumber&);
    bool operator==(const ComplexNumber&);
    ComplexNumber operator+(const ComplexNumber&);
    ComplexNumber operator-(const ComplexNumber&);
    ComplexNumber operator/(const ComplexNumber&);
    ComplexNumber operator*(const ComplexNumber&);
    ComplexNumber operator%(const ComplexNumber&);

    friend ostream& operator<<(ostream&, const ComplexNumber&);
    friend istream& operator>>(istream&, ComplexNumber&);
};
