#include <iostream>
#include <cstdlib>
using namespace std;

int average(int, int);
double average(double, double);

void avgNum()
{
    system("cls");
    int a = 0, b = 0;
    cout << "Enter first integer" << endl;
    cin >> a;
    cout << "Enter second integer" << endl;
    cin >> b;
    cout << "Average of " << a << " and " << b << " is: " << average(a, b) << endl;
    double x = 0.0, y = 0.0;
    cout << "Enter first double" << endl;
    cin >> x;
    cout << "Enter second double" << endl;
    cin >> y;
    cout << "Average of " << x << " and " << y << " is: " << average(x, y) << endl;
    system("pause");
}

int average(int a, int b)
{
    return (a + b) / 2;
}
double average(double a, double b)
{
    return (a + b) / 2.0;
}