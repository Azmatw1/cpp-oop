#include<iostream>
#include<string>
using namespace std;
class Employee{
    int id;
    string name; 
    float salary;
public:
Employee( int i, string n, float s){
    this->id = i;                //this pointer referes to the 'this' object that called the constructor! (more later)
    this->name = n;
    this->salary =s;
}
Employee( const Employee& e){
    this->id = e.id;
    this->name = e.name;
    this->salary = e.salary;
}
void display(){
    cout<<id<<endl;
    cout<<name<<endl;
    cout<<salary<<endl;
}
};
int main(){
    Employee e1( 1, "Azmat", 9000000);
    Employee e2(e1);
    e1.display();
    e2.display();
    return 0;
}