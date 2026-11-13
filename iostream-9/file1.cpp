//creating files with constructor function.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outf("ITEM");    //creates outf as an object of class ofstream that manages the output stream
                            //using the constructor we initialized the object outf to 'ITEM' or
                            //we connect ITEM file from disk to program through outf stream.
    cout<< "Enter item name: ";
    char name[30];
    cin>> name;             //get name from keyboard and
    outf<< name<< endl;     //write to file ITEM

    cout<< "Enter item cost: ";
    float cost;
    cin>> cost;        //get cost from the keyboard and
    outf<< cost<<endl; //write to file ITEM

    outf.close()   ;   //Disconnect ITEM file from outf

    ifstream inf("ITEM");     //cONNECT item FILE TO INSTREAM object inf

    inf>>name;         //read name from file ITEM
    inf>>cost;         //read cost from the file ITEM
    cout<<endl;
    cout<<"Item cost is: "<<cost<<endl;
    cout<<"Item name is: "<<name<<endl;

    inf.close();         //Disconnect the ITEM from inf;

    return 0;


}