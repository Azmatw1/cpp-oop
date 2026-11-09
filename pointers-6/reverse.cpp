#include<iostream>
using namespace std;
int main(){
    int arr[5]={45 ,34, 27, 86 ,54};
    int*p= arr;
    int n= sizeof(arr)/sizeof(int);

    
    for(int n=5; n>1 ; n--){
        for(int i=0; i<=n-2; i++){
            int temp=*(p+i+1);
            *(p+i+1)=*(p+i);
            *(p+i) = temp;

        }
    } 
        
    
    cout<<"Array is: ";
    for(int i=0; i<n; i++){
        cout<<*(p+i)<<" ";
    }
}