#include "Counter.h"

void performTask(Counter& c1) {
    c1.increment();
    c1.displayCount();
}
void counter() {
    system("cls"); //cause static object destructer will showq message wqhen main exits
    static Counter c1;
    performTask(c1);
    performTask(c1);
    performTask(c1);
    system("pause");
}