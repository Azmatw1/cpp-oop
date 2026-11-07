#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    int* px=&x;       //Before deferencing, it is necessary to assign a value to the pointer
    int *py=&y;        //or it will refer to any location and cause run time error.
    cout<<"\nSum is: "<<(*px + *py);
    cout<<"\nDifference  is: "<<(*px - *py);
    cout<<"\nProduct  is: "<<(*px * *py);
    if(*py!=0){
    cout<<"\nQuotient  is: "<<(*px / *py);}
    return 0;
}