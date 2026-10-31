#include<iostream>
#include<string>
using namespace std;
class Student{
    string studentName;
    int rollNumber;
    string course;
    public:
    Student(){
        studentName ="Azmat";
        rollNumber = 3;
        course="CSE";

    }
    void display(){
        cout<<studentName<<endl;
        cout<<rollNumber<<endl;
        cout<<course<<endl;
    }
};
int main(){
    Student s;
    s.display();
    return 0;
}