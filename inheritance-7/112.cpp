#include<iostream>
#include<string>
using namespace std;
class Vehicle{
protected:
string brand;
public:
static int counter;
Vehicle(string b){
    cout<<"Constructor called!"<<endl;
    brand = b;
    counter++;
    cout<<counter<<endl;
}
~Vehicle (){
    cout<<"Destructor called!"<<endl;
    counter--;
    cout<<counter<<endl;
}
};
class Car: public Vehicle{
public:
Car(string b):Vehicle(b){
 cout<<brand<<endl;
}

};
 int Vehicle::counter = 0;
int main(){
Car c("Ferrari");
Car c2("Mercedes");
return 0;

}