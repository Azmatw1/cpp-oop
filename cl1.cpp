#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    int rollNumber =1;
    int marks =99;
    string name="Azmat";
    public:
    void greeting1(){
        cout<<"Hello! student "<<name<<" roll number: "<<rollNumber<<" with marks: "<<marks<<endl;
    }
    void greeting2();
};
void student::greeting2(){
    cout<<" Hello world!";
}
int main(){
    student s;
    s.greeting1();
    s.greeting2();
    return 0;
}