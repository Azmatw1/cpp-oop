/*Array of pointers*/

/* operator overloading. The << operator. cout has different versions of this function for different data types.*/
#include<iostream>
using namespace std;
int main(){
    int i=0;
    const char *ptr[10] = {                           //declares an array of 10 pointers each of which points to a 'char'
        "books",                        //ptr[0] points to the memory address of 'books' or so to say 
                                        //memory address of its very first character 'b' until it hits the '\0'
        "computer"
    };
    cout<<*ptr[0]<<endl;      //The asterisk (*) is the dereference operator. It means "give me the actual value sitting exactly at this address right now."
    
    
    cout<<ptr[0];                     //when cout sees a pointer to a character, it assumes it is the start of a string
                                    //bery smart . Instead of printing the actual memory address (like 0x4000A1), cout automatically triggers a loop behind the scenes:
                                        /*1. It goes to the address stored in ptr[0].
                                          2. It prints the character it finds there ('b').
                                            3. It moves to the next memory address and prints that character ('o').
                                            4. It keeps going until it hits the hidden null-terminator character ('\0'), which tells it to stop.*/

    cout<<*ptr[1]<<endl;
    cout<<ptr[1]<<endl;
    

    /* cout sees a void*, it doesn't know what kind of data is at this address, so will just print the raw memory location number."*/
    cout<<(void*)ptr[0];

    return 0;
}