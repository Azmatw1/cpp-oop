#include<iostream>
#include<string>
using namespace std;
class Student{
    int rollNumber;
    string name;
    public:
    Student(){
        this->rollNumber=1;
        this->name ="Random dude";
    }
    Student(int x, string s){
        this->rollNumber=x;
        this->name =s;
    }
    Student check(){
        if(this->rollNumber==3){
            return *this;
        }
        exit(0);
    }
    void display(){
        cout<<name<<endl;
    }
};
int main(){
    Student s1(3, "Azmat"), s2;
    s2= s1.check();     //this will point to the calling object i.e s1.
    s2.display();
    return 0;
}