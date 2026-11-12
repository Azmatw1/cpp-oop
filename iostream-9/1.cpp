//in c++ data is read and written using streams-interface between the programmer and the terminal device.
//stream is a sequence of bytes. It acts as a source if it gives input data to program and destination if if it gets data from program.
//A program extracts the bytes from an input stream and inserts bytes into an output stream.
/*sTREAM CLASSES are declared in the header file iostream that contains all the programs that communicate with console unit.*/

#include <iostream>
using namespace std;
int main(){
    int count;
    char c;
    cout<<"INPUT TEXT"<<endl;

    cin>>c;   //it will read the data character by character . The reading will be terminated at the encounter of a white space pr a character that doesn't match the destination.
    cout<<c;

    cin>>count ;
    cout<<count;
    return 0;
}
   