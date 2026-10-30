#include<iostream>
using namespace std;
class factorial{
    int n;
    public:
    void getnum(){
        cout<<"Enter n: ";
        cin>>n;
    }
    void fact(){
        int f= 1;
        for(int i=1; i<=n; i++){
            f=f*i;

        }
        cout<<"Factorial is: "<<f<<endl;
    }


};
int main(){
    factorial a;
    a.getnum();
    a.fact();
    return 0;
}