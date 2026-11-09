
#include <iostream>
using namespace std;

class Date {
    int day, month, year;

public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void operator++() {  // Prefix
        day++;

        if (day > 30) {
            day = 1;
            month++;
        }

        if (month > 12) {
            month = 1;
            year++;
        }
    }

    void operator++(int) {  // Postfix
        Date temp = *this;

        day++;

        if (day > 30) {
            day = 1;
            month++;
        }

        if (month > 12) {
            month = 1;
            year++;
        }
    }

    void display() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d(30, 12, 2025);

    cout << "Original date: ";
    d.display();

    ++d;
    cout << "After prefix increment: ";
    d.display();

    d++;
    cout << "After postfix increment: ";
    d.display();

    return 0;
}

