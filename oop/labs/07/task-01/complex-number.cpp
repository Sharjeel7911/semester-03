#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(int real, int imaginary) {
    m_real = real;
    m_imaginary = imaginary;
}

ComplexNumber::ComplexNumber(const ComplexNumber& obj) {
    this->m_real = obj.m_real;
    this->m_imaginary = obj.m_imaginary;
}

ComplexNumber& ComplexNumber::operator=(const ComplexNumber& obj) {
    this->m_real = obj.m_real;
    this->m_imaginary = obj.m_imaginary;
    return *this;
}

ostream& operator<<(ostream& out, const ComplexNumber& obj) {
    out << obj.m_real << " + " << obj.m_imaginary << "i";
    return out;
}

istream& operator>>(istream& in, ComplexNumber& obj) {
    cout << "Enter real part" << endl;
    in >> obj.m_real;
    cout << "Enter imaginary part" << endl;
    in >> obj.m_imaginary;
    return in;
}

bool ComplexNumber::operator==(const ComplexNumber& obj) {
    if (this->m_real == obj.m_real && this->m_imaginary == obj.m_imaginary)
        return true;
    return false;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& obj) {
    ComplexNumber temp;
    temp.m_real = this->m_real + obj.m_real;
    temp.m_imaginary = this->m_imaginary + obj.m_imaginary;
    return temp;
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& obj) {
    ComplexNumber temp;
    temp.m_real = this->m_real - obj.m_real;
    temp.m_imaginary = this->m_imaginary - obj.m_imaginary;
    return temp;
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber& obj) {
    ComplexNumber temp;
    temp.m_real = this->m_real / obj.m_real;
    temp.m_imaginary = this->m_imaginary / obj.m_imaginary;
    return temp;
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& obj) {
    ComplexNumber temp;
    temp.m_real = this->m_real * obj.m_real;
    temp.m_imaginary = this->m_imaginary * obj.m_imaginary;
    return temp;
}

ComplexNumber ComplexNumber::operator%(const ComplexNumber& obj) {
    ComplexNumber temp;
    temp.m_real = this->m_real % obj.m_real;
    return temp;
}