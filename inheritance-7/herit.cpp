#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    public:
    Person(string n, int a){
        name =n; age=a;
    }
};
class Student: virtual public Person{
    protected :
    int rollNo;
    public:
    Student(string n, int a, int r): Person(n, a){
        rollNo =r;
    }

};
class Employee: virtual public Person{
    protected:
    int EmployeeId;
    float salary;
    public:
    Employee(string s, int a, int id, float n): Person(s, a){
        EmployeeId = id;
        salary = n;
    }
};
class Teachinassistant : public Student, public Employee{
    public:
    Teachinassistant(string n, int a, int r, int id, float s): Person( n, a), Student( n, a, r), Employee( n, a, id, s){}
    void display(){
                cout<<name<<endl;
                cout<<age<<endl;
                cout<<rollNo<<endl;
                cout<<EmployeeId<<endl;
                cout<<salary<<endl;
            }
    };

int main(){
    Teachinassistant ta("Azmat", 19, 3, 501, 45000);
    ta.display();
    return 0;
}