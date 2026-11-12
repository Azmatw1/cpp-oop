/*virtual functions- used to execute polymorphism. Before the compiler simply ignored the contents of the pointer*/
//it didn't care whether the object was of type base or derived, only cared about the 'type of pointer' i.e BASE
//but by making the same nume function virtual, at run time, complier determines which function to use
//based on 'type of object' pointed to by the BASE pointer, not the type of pointer!. so by making base pointer point to different types of objects we can execute diff versions of VIRTUAL function.


/* WE MUST ACCESS VIRTUAL FUNCTIONS through the use of a pointer
declared as a pointer to the base class , only then run time polymorphism is achieved.*/
#include<iostream>
using namespace std;
class Base{
    public:
    void display(){ cout<<"\nDisplay base ";}
    virtual void show(){ cout<< "\n show base ";}
};
class derived: public Base{
    public:
    void display(){ cout<<"\nDisplay derived ";}
    void show(){ cout<< "\n show derived ";}
};

int main(){
    Base b;
    derived d;
    Base *bptr;
    cout<<"\n bptr points to Base\n";
    bptr = &b;
    bptr->display() ;              //calls  Base version
    bptr->show();                  //calls base version

    cout<<"\n bptr points to Derived\n";
    bptr =&d;
    bptr->display();               //calls Base version
    bptr->show();                  //calls derived version;
    return 0;
}