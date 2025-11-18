#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

inline void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    cout << "\033[2J\033[1;1H";
#endif
}

inline void pauseScreen() {
    cout << "Press Enter to continue...";
    cin.ignore();
    cin.get();
}

#endif