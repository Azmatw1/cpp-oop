#include<iostream>
#include<string>
using namespace std;
class interest{
    int p, r, t, s;
    public:
    void getdata(){
        cout<<"Enter principal amount: ";
        cin>>p;
        cout<<"\nEnter rate: ";
        cin>>r;
        cout<<"\nEnter time: ";
        cin>>t;
    }
    void si(){
        s=(p*r*t)/100;
    }
    void display(){
        cout<<"\nSimple interest is: "<<s;
    }
};
int main(){
    interest i;
    i.getdata();
    i.si();
    i.display();
    return 0;
}