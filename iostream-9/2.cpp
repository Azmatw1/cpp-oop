#include <iostream>
using namespace std;
int main(){
    int size = 20;
    char city[20];
    cout<<"Enter city name: "<<endl;
    cin>>city;                        //does nto take in the blank space 
    cout<<"city name: "<<city<<endl;

    cout<<"Enter city name again: "<<endl;
    cin.getline(city, size);
    cout<<"cITY NAME : "<<city<<endl;

    cout<<"Enter another city name: "<<endl; 
    cin.getline(city, size);              //takes in the blank space
    cout<<"New city name: "<<city<<endl;


    return 0;
}