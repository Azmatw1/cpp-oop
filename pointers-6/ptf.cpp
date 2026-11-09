#include<iostream>
using namespace std;
/*using typedef we create an identifier 'Funptr' that can be used later .*/
typedef void (*Funptr)(int, int);  //only defines a function pointer 
void Add(int i, int j){
    cout<< i<< "+"<<j<<"="<<i+j;
}
void subtract(int i, int j){
    cout<<i<<" - "<<j<<"="<<i-j;
}
int main(){
    Funptr ptr;       //creates a function pointer named 'ptr'
    ptr = &Add;       //Now we assign the address of the function Add to ptr , i.e ptr now points to the add function.
    ptr(1, 2);
    cout<<endl;
    ptr=&subtract;
    ptr(3, 2);

}