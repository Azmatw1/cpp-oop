#include<iostream>
using namespace std;
const float PI =3.14;
class Shape {
protected:
    int radius, length, breadth, base, height;
    public:
    Shape(int r ) {
        radius = r;
       }
    Shape(int l, int b){
        length =l;
        breadth =b;
    }
    Shape(int ba, int h){
        base =ba;
        height=h;

    }
};
class Circle : public Shape {
protected:
    float area;
public:
    Circle(int r) : Shape(r) {
        area = float(PI*radius*radius);
    }

    void displayArea() {
        cout << "Rectangle Area: " << area << endl;
    }
};
class Rectangle : public Shape {
protected:
    float area;
public:
    Rectangle(int l, int b) : Shape(l, b) {
        area = float(length*breadth);
    }

    void displayArea() {
        cout << "Rectangle Area: " << area << endl;
    }
};
class Triangle : public Shape {
protected:
    float area;
public:
    Triangle(int ba, int h) : Shape(ba, h) {
        area = float((base*height)/2);
    }

    void displayArea() {
        cout << "Triangle Area: " << area << endl;
    }
};


