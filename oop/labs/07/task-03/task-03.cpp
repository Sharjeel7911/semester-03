#include "Counter.h"

void counter() {
    clearScreen();
    Counter c1;
    cin >> c1;
    Counter c2;
    cin >> c2;

    cout << "Post Increment: " << c1++ << endl;
    cout << "Pre Increment: " << ++c2 << endl;

    cout << "Post Decrement: " << c1-- << endl;
    cout << "Pre Decrement: " << --c2 << endl;

    cout << "Absolute (Unary +): " << +c1 << endl;
    cout << "Negative (Unary -): " << -c2 << endl;
    pauseScreen();
}