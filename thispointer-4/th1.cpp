#include<iostream>
#include<string>
using namespace std;
class Employee{
    int employeeID;
    string name;
    float salary;
    public:
    Employee(){
        this->employeeID=3;
        this->name="Azmat";
        this->salary=100000;
    }
    void display(){
        cout<<employeeID<<endl;
        cout<<name<<endl;
        cout<<salary<<endl;
    }
};
int main(){
    Employee e;
    e.display();
    return 0;
}