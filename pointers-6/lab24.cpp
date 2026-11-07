#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    int* x = &a;
    int* y=&b;
    int* z=&c;
    int smallest=*x;
    if(*y<smallest)
    smallest=*y;
    if(*z<smallest)
    smallest=*z;
    cout<<"Smallest is:"<<smallest;
    return 0;
}