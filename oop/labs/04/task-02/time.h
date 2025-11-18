#include <iostream>
using namespace std;

class Time {
private:
    int m_hours;
    int m_minutes;
    int m_seconds;
public:
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    int getHour();
    int getMinute();
    int getSecond();
    Time add(Time, Time);
    void displayTime();
};
