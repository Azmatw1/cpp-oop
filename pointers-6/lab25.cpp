#include<iostream>
using namespace std;
int main(){
    int n,x;
    x=1;
    cout<<"Enter number: ";
    cin>>n;
    int* p= &x;
    for(int i=1; i<=n; i++){
        *p = *p * i;
    }
    cout<<"The factorial is: "<<*p;
    return 0;






}