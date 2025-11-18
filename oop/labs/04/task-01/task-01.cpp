#include "ComplexNumber.h"

void complexNumber() {
    system("cls");
    ComplexNumber c_1;
    ComplexNumber c_2;

    double real = 0, imaginary = 0;

    cout << "1st Complex Number : " << endl;
    cout << "Enter the real part of the complex number: ";
    cin >> real;
    c_1.setReal(real);
    cout << "Enter the imaginary part of the complex number: ";
    cin >> imaginary;
    c_1.setImaginary(imaginary);

    cout << "2nd Complex Number : " << endl;
    cout << "Enter the real part of the complex number: ";
    cin >> real;
    c_2.setReal(real);
    cout << "Enter the imaginary part of the complex number: ";
    cin >> imaginary;
    c_2.setImaginary(imaginary);

    system("cls");
    cout << "1st ";
    c_1.display();
    cout << "2nd ";
    c_2.display();

    cout << "Sum of (" << c_1.getReal() << " + " << c_1.getImaginary() << "i) " << "+ (" << c_2.getReal() << " + " << c_2.getImaginary() << "i) = ";
    c_1.displaySum(c_2.getReal(), c_2.getImaginary());

    cout << "Difference of (" << c_1.getReal() << " + " << c_1.getImaginary() << "i) - (" << c_2.getReal() << " + " << c_2.getImaginary() << "i) = ";
    c_2.displayDifference(c_1.getReal(), c_1.getImaginary());
    system("pause");
}