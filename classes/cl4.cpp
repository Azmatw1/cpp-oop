#include<iostream>
#include<string>
using namespace std;

class number{
    int no;
    string result;
    public:
    void putdata(){
        cout<<"Enter the number: ";
        cin>>no;
    }

    void check(number );

    void display(){
        cout<<result;
    }
};
void number::check(number n1){
    if(n1.no>0){
        result ="Positive";
    }
    else if(n1.no<0){
        result ="Negative";
    }
    else
    result = "Zero i.e neither positive nor negative";
}

int main(){
    number n;
    n.putdata();
    n.check(n);
    n.display();
    return 0;
}