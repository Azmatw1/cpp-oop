#include<iostream>
#include<string>
using namespace std;
class shape{
    float length , breadth, radius;
    public:
    void area(float l, float b){
        length=l;
        breadth=b;
        cout<<"\nArea is: "<<length*breadth<<endl;
    }
    void area(float r){
        radius =r;
        cout<<"\nArea is: "<<3.141592*radius*radius<<endl;
    }
};
int main(){
    shape obj;
    obj.area(3, 4);
    obj.area(5);
    return 0;
}