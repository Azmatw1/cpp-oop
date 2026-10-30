#include<iostream>
#include<string>
using namespace std;
class numm{
    int num1, num2;
    public:
    void getdata();
    void swap();
    void display();
};
void numm:: getdata(){
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"\nEnter the second number: ";
    cin>>num2;
}
void numm:: display(){
    cout<<num1<<" "<<num2<<endl;
}
void numm:: swap(){
    
    int temp =num1;
    num1=num2;
    num2=temp;
}
int main(){
    numm n;
    n.getdata();
    cout<<"Before swap: ";
    n.display();
    n.swap();
    cout<<"After swap: ";
    n.display();
    return 0;
}