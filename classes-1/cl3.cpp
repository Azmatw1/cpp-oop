#include<iostream>
#include<string>
using namespace std;
class numnum{
    int num1, num2;
    public:
    void getdata(int a , int b){
    num1= a;
    num2= b;
    }
    int sum(int, int);
    void largest(int, int);
    void checkEO(int);

};
int numnum::sum(int a, int b){
    getdata(a, b);
    cout<<"Sum is: ";
    int s=num1+num2;
    return s;
    
}
void numnum::largest(int a, int b){
    getdata( a, b);
    if(num1>num2){
        cout<<"Greatest is "<<num1<<endl;
    }
    else{
        cout<<"Greatest is "<<num2<<endl;
    }
}
void numnum::checkEO(int a){
    num1=a;
    if(num1%2==0){
        cout<<"Even"<<endl;
    }
    else
    cout<<"Odd"<<endl;
}



int main(){
    numnum obj;
    cout<<obj.sum(3, 4);
    obj.largest(3, 4);
    obj.checkEO(54);
    return 0;
}