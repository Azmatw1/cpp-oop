//in c++ data is read and written using streams-interface between the programmer and the terminal device.
//stream is a sequence of bytes. It acts as a source if it gives input data to program and destination if if it gets data from program.
//A program extracts the bytes from an input stream and inserts bytes into an output stream.
/*sTREAM CLASSES are declared in the header file iostream that contains all the programs that communicate with console unit.*/

#include <iostream>
using namespace std;
int main(){
    int count =0;
    char c;
    cout<<"INPUT TEXT"<<endl;
    cin.get(c);    //it will read our text , only first character rest will be made available for the second cin.
    while(c!= 't'){   //cin fetches a character including blank space tab and new line;
    
    cout.put(c);         //output a text line character ny character.
    count ++;
    cin.get(c);
    }
    cout<<"Number of characters ="<<count<<"\n";
    return 0;
}
   