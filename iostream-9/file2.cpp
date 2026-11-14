//working with multiple files that use a single stream.
//creating files with open() functions.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;              //first create an object(stream) 'fout' of class 'ofstream'
    fout.open("country");       //now connect "country" file to the stream.

    fout<<"United states of America"<<endl;
    fout<<"United Kingdom"<<endl;
    fout<<"China"<<endl;

    fout.close();   //disconnect 'country' file from the stream

    fout.open("capital");      //connect file named "capital" to the stream object fout.
    fout<<"Washington DC"<<endl;
    fout<<"London"<<endl;
    fout<<"Beijing"<<endl;

    fout.close();         //disconnect 'capital' from the stream
    //reading the files

    const int N = 80;    //size of the line
    char line[N];

    ifstream fin;        //create an input stream
    fin.open("country");     //connect "country " to it.
    cout<<"contents of country file"<<endl;

    while(fin)              //check end- of- file ..more on this later!
    {
        fin.getline(line, N);      //read a line
        cout<< line<<endl;            //display it.

    }
    fin.close();               //disconnect 'country' from the stream
    fin.open("capital");          //connect 'capital' to it.

    cout<<"contents of capital file "<<endl;
    while(fin)                 //check end-of-file
    {
        fin.getline(line, N);
        cout<<line<<endl;
    }
    fin.close();
    
    return 0;


}