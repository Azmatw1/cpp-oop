#include<iostream>
using namespace std;
class temp{
    float c, f;
    public:
        void Convert(void);
};
    void temp::Convert(void)
    {
        cout<<"Enter temperature in fahrenheit:\n";
    cin>>f;
    c= ((f-32)*5)/9;
    cout<<"Tempertaure in degree celsius is:"<<c;
    }
int main(){
    
    temp t1;
    t1.Convert();

    return 0;














}