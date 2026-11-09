#include<iostream>
using namespace std;
class Student{
    protected:
    string Sname;
    int rollNumber;
    string branch;
public:
    Student(string n, int r, string b) {
        Sname = n;
        rollNumber = r;
        branch = b;
    }
};
class Employee {
protected:
    int employeeId;
    float salary;
public:
    Employee(int id, float s) {
        employeeId = id;
        salary = s;
    }
};
class TeachingAssistant : public Student, public Employee {
    string name;
    public:
    TeachingAssistant(string n, int r, string b, int id,float s, string t) 
    : Student(n, r, b), Employee(id, s) {
        name = t;
    }
void display() {

        cout << "Student Name: " << Sname << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Branch: " << branch << endl;
        cout<<" Employee name: "<<name<<endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main() {
    TeachingAssistant ta("Azmat", 3, "CSE", 101, 250000, "Google");
    ta.display();

    return 0;
}