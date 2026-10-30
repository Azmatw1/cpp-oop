#include<iostream>
using namespace std;
class calculate{
public:
static void volume(int s){
    cout<<"\nVolume of the cube is: "<<s*s*s<<endl;
}
static void volume(int r, int h){
    cout<<"\nVolume of the cylinder is: "<<3.14*r*r*h;
}

};
int main(){
    int s, r, h;
    cout<<"Enter side of the cube: ";
    cin>>s;
    calculate::volume(s);
    cout<<"Enter radius and height of the cylinder: ";
    cin>>r>>h;
    calculate::volume(r, h);
    return 0;


}