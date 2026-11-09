
#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person Constructor" << endl;
    }

    ~Person() {
        cout << "Person Destructor" << endl;
    }
};

class Student : public Person {
public:
    Student() {
        cout << "Student Constructor" << endl;
    }

    ~Student() {
        cout << "Student Destructor" << endl;
    }
};

class ResearchStudent : public Student {
public:
    ResearchStudent() {
        cout << "ResearchStudent Constructor" << endl;
    }

    ~ResearchStudent() {
        cout << "ResearchStudent Destructor" << endl;
    }
};

int main() {
    ResearchStudent rs;

    return 0;
}

