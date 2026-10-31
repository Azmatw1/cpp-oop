#include<iostream>
using namespace std;
class Time{
    int hours, minutes, seconds;
    int name;
    public:
    Time(){
        cout<<"Constructor 1\n";
        name =1;
        hours =0;
        minutes =0;
        seconds =0;
    }
    Time(int h, int m){
        cout<<"Constructor 2\n";
        name =2;
        hours =h;
        minutes =m;
        seconds =0;
    }
    Time(int h, int m, int s){
        cout<<"Constructor 3\n";
        name =3;
        hours =h;
        minutes =m;
        seconds =s;
    }
    ~Time(){
        cout<<"object "<<name<<" destroyed\n";
    }
    void display(){
        cout<<hours<<endl<<minutes<<endl<<seconds<<endl;
    }
};
int main(){
    Time t1;                //constructor 1 called
    Time t2(2, 30);         //constructor 2 called
    Time t3(2, 30, 59);     //constructor 3 called
    t1.display();
    t2.display();
    t3.display();       
                            //destructo called. First object 3 will be destroyed then object 2 then object 1. It is stored in stack 
                            //it follows the LIFO(Last in Fist Out)
    return 0;
}