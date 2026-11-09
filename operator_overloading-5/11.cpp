
#include <iostream>
using namespace std;

class Number {
    int x;

public:
    Number(int a = 0) {
        x = a;
    }

    Number operator+(Number n) {
        return Number(x + n.x);
    }

    void display() {
        cout << "Value = " << x << endl;
    }
};

int main() {
    Number n1(10);
    Number n2(20);

    Number n3 = n1 + n2;

    cout << "First object: ";
    n1.display();

    cout << "Second object: ";
    n2.display();

    cout << "After addition: ";
    n3.display();

    return 0;
}

