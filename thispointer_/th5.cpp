#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;
    int rollNumber, marks;
    public:
    Student(){
        cout<<"Default constructor!"<<endl;
    }
    Student(string s){
        cout<<"Constructor 1 called"<<endl;
        this->name = s;
        cout<<name<<endl;
    }
     Student(string s, int r){
        cout<<"Constructor 2 called!"<<endl;
        this->name = s;
        this->rollNumber = r;
        cout<<name<<" "<<rollNumber<<endl;
    }
     Student(string s, int r, int m){
        cout<<"Constructor 3 called!"<<endl;
        this->name = s;
        this->rollNumber = r;
        this->marks = m;
        cout<<name<<" "<<rollNumber<<" "<<marks<<endl;
    }
};
int main(){
    Student s1;
    Student s2("Azmat");
    Student s3("Azmat" , 3);
    Student s4("Azmat", 3, 100);
    return 0;
}