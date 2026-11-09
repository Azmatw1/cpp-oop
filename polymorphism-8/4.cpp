#include<iostream>
using namespace std;
class A{
public:
virtual ~A(){
    //Base class destructor
    cout<<"Base class destructor";
}
};
class B: public A{
public:
~B(){
    //Derived class destructor
    cout<<"Derived class destructor";
}

};
main(){
    A *ptr = new B;      //A class pointer has been allocated class B object.
    delete ptr;          //when this pointer is deleted, this will trigger base class destructor
                         //derived class destructor won't be cslled, may lead to memory lea
/* thus we have to dec;are the base clss destrcutor as 'Virtual'*/
}