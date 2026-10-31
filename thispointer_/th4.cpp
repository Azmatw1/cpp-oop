#include<iostream>
#include<string>
using namespace std;
class F1{
    string d_name;
    int r_number;
    public:
    void display(){
        cout<<d_name<<endl;
        cout<<r_number<<endl;
    }
    F1(string d, int r){
        cout<<"Constructor called!"<<endl;
        this->d_name = d;
        this->r_number = r;
        this->display();
    }
};
int main(){
    F1 f("Max Verstappen", 3);
    return 0;
}