/*Pure virtual function is a function declared in a base class that has no definition relative to the base class*/
//compiler requires each derived class to either define the function pr redeclare it as a pure virtual function
//A CLASS CONTAINING PURE VIRTUAL FUNCTIONS cannot be used to declare any objects OF ITS OWN!-> Abstract base classes.(it only provides some traits to the derived class and creates a base pointer required for run time polymorphism)

#include<iostream>
using namespace std;
class Balagurusamy{                         //base class
    public:
    virtual void example()= 0;       //Pure virtual function or the 'do-nothing' function.
};
class C: public Balagurusamy{
public:
    void example(){
        cout<<"C is the god's language";
    }
};
class oops: public Balagurusamy{
public:
void example(){
    cout<<"C++ is not too bad";
}
};

int main(){
   Balagurusamy* arra[2];     //creates an array of pointers to base

   C e1;
   oops e2;
   arra[0]=&e1;           //pointer arra[0] points to object of type base
   arra[1]= &e2;           //points to object of type derived.

   arra[0]->example(); //call the C function
   arra[1]->example(); //call the oops function

    return 0;
}