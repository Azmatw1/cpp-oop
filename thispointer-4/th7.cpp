#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;
    int rollNumber;
    int marks;
    public:
    Student(){cout<<"Default constructor called!"<<endl;};         
    Student(string s, int r, int m){
        cout<<"Constructor 1 called!"<<endl;
        this->name = s;
        this->rollNumber =r;
        this->marks = m;
    }
    //creating user defined copy constructor
    Student(Student & s){
        cout<<"Copy constructor called!"<<endl;
        this->name = s.name;
        this->rollNumber = s.rollNumber;
        this->marks = s.marks;
    }
    //without creating user defined copy constructor;
    void display(){
        cout<<name<<" "<<rollNumber<<" "<<marks<<endl;
    }

    ~Student(){
        cout<<"Destructor called!"<<endl;
    }
};
int main(){
    Student a("Azmat", 3, 100);
    //Student b = a;   //default copy constructor shallow copy!
   // b = a;           //copy assignment operator shallow copy!
   Student b(a);      //Now using user defined copy constructor!
    a.display();
    b.display();
    return 0;       
}