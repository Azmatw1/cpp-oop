#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"\nBefore swapping x is: "<<x<<" and y is: "<<y;
    int* px=&x;
    int* py=&y;
    int temp=*px;
    *px=*py;
    *py= temp;
    cout<<"\nAfter swapping x is: "<<x<<" and y is: "<<y;
    return 0;
}