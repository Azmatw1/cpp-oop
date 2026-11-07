#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int* arr= new int[size]; //creates a memory space for an array og 'size' integers. arr[0] will refer 
                            //to the first element.
    
    cout<<"Enter elements: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    for(int i=0; i<size ;i++ ){
        cout<<arr[i]<<" ";
        
    }
    delete arr;         //free a dynamically allocated array.size is not required.
                        //else delete [size] pointer-variable, to specify size.
    return 0;
}