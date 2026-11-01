#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;
    int marks;
    public:
    Student(string s, int m){
        name =s;
        marks =m;

    }
    Student operator-(){
        return Student(name, -marks);
    }
    Student  operator+(){
        return Student(name, +marks);
    }
    void display(){
        cout<<marks<<endl;
    }
};
int main(){
    Student s("Azmat", 100);
    s.display();
    Student s2= -s;
    s2.display();
    Student s3 =+s;
    s3.display();
    return 0; 
}