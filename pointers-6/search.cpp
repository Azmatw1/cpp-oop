#include<iostream>
using namespace std;
int main (){
    int arr[]={1, 2, 2, 4, 5};
    int* ptr=arr;
    int n;
    cout<<"\nEnter the element to be found: ";
    cin>>n;
    int count=0;
    for(int i=0; i<5; i++){
        if(n==*(ptr+i)){
            cout<<"\nThe element is at "<<i+1<<"th position.";
            count++;
        }
    }
    if(count==0){
        cout<<"\nNo element to be found.";
    }
}