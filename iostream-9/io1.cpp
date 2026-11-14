#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    char string[80];
    cout<<"Enter a string: ";
    cin>>string;        //does not take blank space

    int len = strlen(string);

    fstream file;                   //input and output stream
    cout<<"\nOpening the 'TEXT' file and storing the string in it."<<endl;

    file.open("TEXT", ios::in | ios::out | ios::trunc);
    for(int i =0; i<len; i++){
        file.put(string[i]);           //put a character to file

    }
    file.seekg(0);              //go to start of file

    char ch;
    cout<<"Reading the file contents: ";
    while(file)
    {
          file.get(ch);        //get a character from file     //C++ doesn't know it's at the end of the file until it actually tries to read past the last character and fails. 
                             //So it enters the loop one more time.
                             //When you put file.get(ch) directly inside the while condition, C++ tries to read first, and only enters the loop if that read actually succeeded. 
                             //The moment it hits the end of the file and fails to read, it skips cout << ch and exits immediately.
        cout<<ch;             //display that on the screen
    }
    return 0;
}