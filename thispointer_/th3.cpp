#include<iostream>
#include<string>
using namespace std;
class Student{
    int rollNumber, marks;
    public:
    Student(int r, int m){
        this->rollNumber = r;
        this->marks = m;
    }
    void compare(Student s){
        if(s.marks > this->marks){
            cout<<s.rollNumber<<" has more marks."<<endl;
        }
        else if(s.marks < this->marks){
            cout<<this->rollNumber<<" has more marks."<<endl;
        }
        else
        cout<<"Both have same marks."<<endl;
    }
};
int main(){
    Student a(3, 92);
    Student b(2, 97);
    a.compare(b);       //this will point to the calling object i.e a
    return 0;
}