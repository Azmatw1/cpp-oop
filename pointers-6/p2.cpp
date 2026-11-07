/*There is no error checking of array bounds in c++. It is programmer's task.*/
#include<iostream>
using namespace std;
int  main(){
    int arr[10]= {1, 99, 4, 37, 88, 3, 19, 45, 62, 87};
    int i, num, *ptr;
    //assigning base adress of array to pointer variable ptr
    ptr = arr; //no need to use &
    cout<<"Enter the element to be searched: ";
    cin>>num;
    for(int i=0; i<10 ; i++){
        if(*ptr == num){
            cout<<"\n"<<num<<" is present in the array";
            break;
        }
        else if(i==9)
        cout<<"\n"<<num<<" is not present in the array";
                
        ptr++;

    
    }
    return 0;

}