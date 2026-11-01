#include<iostream>
#include<string>
using namespace std;
class Rectangle{
    int length, breadth;
    public:
    Rectangle(){
        cout<<"Constructor called\n";
        length =1;
        breadth =1;
    }
    void display(){
        cout<<length<<endl;
        cout<<breadth<<endl;
    }
};
int main(){
    Rectangle r;
    r.display();
    return 0;
}