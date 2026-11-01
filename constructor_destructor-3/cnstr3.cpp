#include<iostream>
using namespace std;
class Circle{
    float radius;
    public:
    Circle(float r){
        cout<<"constructor called!\n";
        radius =r;
    }
    void area(){
        cout<<"Area is: "<<3.1415*radius*radius<<endl;
    }
};
int main(){
    Circle c(3); //parametrized constructor!
    c.area();
    return 0;
}