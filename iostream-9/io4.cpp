//counting objects in a file
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class emp{
    char name[30];
    int ecode;
public:
    emp(){cout<<"Default consructor called\n";};
    emp( const char* n, int c){
        strcpy(name, n);
        ecode = c;
        cout<<"Const 1 called!\n";
    }

};
int main(){
    emp e[4];
     e[0]= emp("Amit", 1);
     e[1]= emp("Joy", 2);
     e[2]= emp("Rahul", 3);
     e[3]= emp("Vikas", 4);

    fstream file;
    file.open("Employee.dat", ios::in| ios::out|ios::trunc);

    int i;
    for(i=0; i<4; i++){
        file.write((char*)&e[i], sizeof(e[i]));

    }
    file.seekg(0, ios::end);
    int end= file.tellg();    //go to the end of the file, tellg()  determines the current position of the get pointer 
                              //which in turn specifies the length of the file in bytes.
    cout<<end<<endl;
    cout<<sizeof(emp)<<endl;
    cout<<"Number of object is: "<<end/sizeof(emp);    //total size of file/ size of one object = number of objects!

    return 0;
}