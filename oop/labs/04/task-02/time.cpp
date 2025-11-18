#include"Time.h"

void Time::setHour(int h) {
    m_hours = h;
}

void Time::setMinute(int m) {
    m_minutes = m;
}

void Time::setSecond(int s) {
    m_seconds = s;
}

int Time::getHour() {
    return m_hours;
}

int Time::getMinute() {
    return m_minutes;
}

int Time::getSecond() {
    return m_seconds;
}

Time Time::add(Time t_1, Time t_2) {
    Time t_3;
    int sec = t_1.getSecond() + t_2.getSecond();
    int min = t_1.getMinute() + t_2.getMinute() + sec / 60;
    int hour = t_1.getHour() + t_2.getHour() + min / 60;
    t_3.setSecond(sec % 60);
    t_3.setMinute(min % 60);
    t_3.setHour(hour);
    return t_3;
}

void Time::displayTime() {
    cout << m_hours << " hours, " << m_minutes << " minutes, " << m_seconds << " seconds" << endl;
}