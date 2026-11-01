#include<iostream>
using namespace std;
class Box{
    int side, length, breadth, height;
    public:
    Box(){
        cout<<"Default box created\n";
    }       //default constructor
    Box(int s){
        side=s;
        cout<<"Cube created!\n";

    }
    Box(int l, int b, int h){
        length =l;breadth=b;height=h;
        cout<<"A cuboid created!\n";
    }
    
};
int main(){
    Box b1;
    Box b2(5);
    Box b3(3, 4, 5); //constructor overloading , will select based on parameter.
    return 0;
}