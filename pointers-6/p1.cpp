/* we cannot perform pointer arithmetic on variables that are not stored in contiguous 
memory locations.*/
#include<iostream>
using namespace std;
int main(){
    int num[]= {1, 2, 3, 4, 5};
    int *ptr;
    int i;
    cout<<"Array values are: ";
    for(int i =0; i<sizeof(num)/sizeof(int); i++){
        cout<<num[i]<<"\t";
    }
    ptr = num;       //allocating base address of num to ptr
    /*Printing the array*/
    cout<<"Value of ptr: "<<*ptr<<"\t";
    ptr++;
    cout<<"Value of ptr++: "<<*ptr<<"\t";
    ptr+=2;
    cout<<"Value of ptr+=2: "<<*ptr<<"\t";

    return 0;
}