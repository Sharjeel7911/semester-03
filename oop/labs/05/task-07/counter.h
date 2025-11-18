#include "../main.h"

class Counter {
private:
    int m_count;
public:
    Counter();
    ~Counter();

    void increment();
    void displayCount() const;
};