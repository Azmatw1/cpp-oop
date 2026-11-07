#include<iostream>
using namespace std;
int main(){
    int a, b;
    int*pa=&a;
    int* pb = &b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    if(*pa>*pb){
        cout<<*pa<<" is greater\n";
        
    }
    else if (*pb >*pa){
        cout<<*pb<<" is greater\n";

    }
    else
    cout<<"Both are equal";
    return 0;
}