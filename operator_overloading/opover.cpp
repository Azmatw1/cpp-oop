#include<iostream>
using namespace std;
class Complex{
    int real, imaginary;
    public:
    
    Complex(int r=0, int i=0){
        real =r;
        imaginary= i;
    }
    Complex operator +(Complex& c){
        Complex temp;
        temp.real = real+ c.real;
        temp.imaginary = imaginary +c.imaginary;
        return temp;
    }
    void display(){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
};
int main(){
    Complex c1(4, 5);
    Complex c2(6, 7);
    Complex c3=c1+c2;
    cout<<"The number is: ";
    c3.display();

}