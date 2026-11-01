#include<iostream>
using namespace std;
class Result{
    int marks;
    public:
    Result(int m){
        cout<<"Constructor called!";
        marks =m;
    }
    void grade(){
        if(marks>90){
            cout<<"Grade: A";
        }
        else if(marks>80){
            cout<<"Grade: B";
        }
        else if(marks>70){
            cout<<"Grade: C";
        }
        else if(marks>60){
            cout<<"Grade: D";
        }
        else if(marks>50){
            cout<<"Grade: E";
        }
        else 
        cout<<"Fail";
    }
};
int main(){
    Result r(76);
    r.grade();
    return 0;
}