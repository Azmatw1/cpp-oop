#include<iostream>
using namespace std;
class Student{
    protected:
    int rollNo;
    string name;
    float marks1, marks2, marks3;

public:
    Student(int r, string n, float m1, float m2, float m3) {
        rollNo = r;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
};

class Result : public Student {
public:
    Result(int r, string n, float m1, float m2, float m3)
        : Student(r, n, m1, m2, m3) {}

    void displayResult() {
        float total = marks1 + marks2 + marks3;
        float percentage = total / 3.0;

        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nTotal Marks: " << total;
        cout << "\nPercentage: " << percentage << "%";

        if (percentage >= 90)
            cout << "\nGrade: A+";
        else if (percentage >= 80)
            cout << "\nGrade: A";
        else if (percentage >= 70)
            cout << "\nGrade: B";
        else if (percentage >= 60)
            cout << "\nGrade: C";
        else if (percentage >= 40)
            cout << "\nGrade: D";
        else
            cout << "\nGrade: F";

        cout << endl;
    }
};

int main() {
    Result s(101, "Azmat", 85, 90, 80);
    s.displayResult();

    return 0;
}