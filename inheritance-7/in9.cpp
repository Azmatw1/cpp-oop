#include<iostream>
using namespace std;
class Shape {
protected:
    int length, breadth;
public:
    Shape(int l, int b) {
        length = l;
        breadth = b;
    }
};
class Rectangle : public Shape {
protected:
    float area;
public:
    Rectangle(int l, int b) : Shape(l, b) {
        area = float(length * breadth);
    }

    void displayArea() {
        cout << "Rectangle Area: " << area << endl;
    }
};
class Cuboid : public Rectangle {
    int height;

public:
    Cuboid(int l, int b, int h): Rectangle(l, b) {
        height = h;
    }

    void displayVolume() {
        cout << "Cuboid Volume: " << area * float(height) << endl;
    }
};
int main() {
    Cuboid c(3, 4, 5);

    c.displayArea();
    c.displayVolume();

    return 0;
}