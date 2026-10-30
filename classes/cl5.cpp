#include<iostream>
#include<string>
using namespace std;
class student{
    int marks1, marks2, x;
    public:
    void getdata();
    int total();
    void percentage();
};
void student::getdata(){
    cout<<"Enter marks of subject 1: ";
    cin>>marks1;
    cout<<"Enter marks of subject 2: ";
    cin>>marks2;
}
int  student::total(){
    
    x =marks1+marks2;
    cout<<"Total marks: "<<x<<endl;
    return x;
}
void student::percentage( ){
    cout<<"Percentage: "<<x/2<<"%";

    
}


int main(){
    student s;
    s.getdata();
    s.total();
    s.percentage();
    return 0;
}