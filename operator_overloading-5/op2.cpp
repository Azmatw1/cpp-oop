#include<iostream>
using namespace std;
class F1{
    string name;
    int d_number;
    public:
    F1(string s, int n){
        name = s;
        d_number = n;
    }
    void operator!(){
        cout<<"The driver named "<<name<<" does not have number "<<d_number<<endl;
    }
    void display(){
        cout<<"The driver named "<<name<<" has the number "<<d_number<<endl;
    }

};
int main(){
    F1 f("Max verstappen", 1);
    f.display();
    !f;
    return 0;
}