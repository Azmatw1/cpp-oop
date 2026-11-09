#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int * p=arr;
    int sum=0;
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        sum += *(p + i);

    }
    cout<<"array is: ";
    for(int i=0; i<5; i++){
        cout<<*(p+i)<<" ";
    }
    cout<<"\nSum: "<<sum;
    cout<<"\nAverage : "<<sum/5;
}