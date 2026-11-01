 /*Static member variable is initialized to zero when the first object of its class is created.
 Only one copy of that member is created for the entire class and is shared by all the objects of that class.
 Lifetime: entire program
 Visibility: Local
 Storage: Data segment 
 */
#include<iostream>
#include<string>
using namespace std;
class student{
    static int marks1, marks2, marks3;  
    public:
    void getdata(){
        cout<<"Enter marks: ";
        cin>>marks1>>marks2>>marks3;
    }
    static void calculate(){                                        //static member function can only access other static members o its class.
                                                                    //can be used(called) directly using class name without any object needed.
        int sun = marks1+ marks2+ marks3;
        cout<<"Sum is: "<<sun<<endl;
        float percentage = sun/3;
        cout<<"Percentage is: "<<percentage<<"%"<<endl;
    }
};
int student:: marks1; /*Type and scope need to be defined outside class definition. Why? Because static 'data' members are stored separately
                        rather than as a part of an object. Associated with the class not the class object hence called 'class
                        variables'.*/
 int student::marks2;
  int student::marks3;
int main(){
    student s;
    s.getdata();
    student::calculate();
    return 0;
}