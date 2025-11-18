#include "Time.h"

void time() {
    system("cls");
    Time t_1;
    Time t_2;

    int h = 0, m = 0, s = 0;

    cout << "Enter time 1 (hours, minutes, seconds): ";
    cin >> h >> m >> s;
    t_1.setHour(h);
    t_1.setMinute(m);
    t_1.setSecond(s);

    cout << "Enter time 2 (hours, minutes, seconds): ";
    cin >> h >> m >> s;
    t_2.setHour(h);
    t_2.setMinute(m);
    t_2.setSecond(s);

    Time t_3 = t_3.add(t_1, t_2);

    system("cls");
    cout << "Time 1: ";
    t_1.displayTime();
    cout << "Time 2: ";
    t_2.displayTime();
    cout << "Sum of Time 1 and Time 2: ";
    t_3.displayTime();
    system("pause");
}