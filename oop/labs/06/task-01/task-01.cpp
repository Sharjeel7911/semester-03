#include "Counter.h"

void counter() {
    system("cls"); //cause static object destructer will show message when main exits
    static Counter c1;

    c1.increment();
    c1.displayCount();
    system("pause");
}