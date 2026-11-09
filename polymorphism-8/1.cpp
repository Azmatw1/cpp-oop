/*Pointer to derived object : If we define a pointer of type base i.e pointing to class B, can be used to point to an object of derived class D*/
//But it cannot access the original members of D and can only access the mebers inherited from B
//Thus if two members have same name, the pointer will always access base class member.

#include <iostream>
using namespace std;
class BC{
    public:
    int b;
    void show(){
        cout<<"b ="<<b<<endl;
    }
};
class DC: public BC{
    public:
    int d;
    void show(){
        cout<<"b ="<<b<<endl;
        cout<<"d ="<<d<<endl;
    }
};

int main(){
    BC *bptr;        //base pointer
    BC base;
    bptr = &base;       //base address

    bptr->b = 100;      //access public member b of BC via base pointer
    cout<<" bptr points to base object"<<endl;
    bptr->show();
    
    DC derived;
    bptr =&derived;    //address of derived object
    bptr->b = 200;     //access public inherited member b of DC via base pointer

    //bptr->d = 300; //will not work because it is original to derived class.
    cout<<" bptr now points to derived object"<<endl;
    bptr->show();      


    DC *dptr;        ///derived type pointer
    dptr =&derived;
    dptr->d = 300;
    cout<<"dptr is derived type pointer"<<endl;
    dptr->show();

    cout<<"using (DC *)bptr"<<endl;   //type casting bptr as DC type.
    ((DC *) bptr)->d = 400;
    ((DC *) bptr)->show();


    return 0;
}