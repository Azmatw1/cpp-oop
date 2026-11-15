//reading and writing class objects
//An int is 4 bytes and prefers to live at a memory address that is a multiple of 4 (like address 0, 4, 8, 12, etc.).

// name array takes up bytes 0 through 9.

//The very next available spot that is a multiple of 4 is 12.

//Therefore, the compiler automatically leaves bytes 10 and 11 empty (padding) so that int code can start neatly at byte 12.
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class INVENTORY{
    char name[10];
    int code;
    float cost;
public:
    void readdata(void);
    void writedata(void);
};
void INVENTORY:: readdata(void){       //read from keyboard
    cout<<"Enter name: "; cin>>name;
    cout<<"Enter code: "; cin>>code;
    cout<<"Enter cost: "; cin>>cost;
}
void INVENTORY::writedata(void){       //formatted display on screen
    cout<<setiosflags(ios::right)
        <<setw(10)<<name
        <<setiosflags(ios::right)
        <<setw(10)<<code
        <<setprecision(2)
        <<setw(10)<<cost
        <<endl;
}
int main(){
    INVENTORY item;
    fstream inoutfile; //input/outputstream
    inoutfile.open("STOCK.DAT", ios::ate|ios::in|ios::out|ios::binary);
    inoutfile.seekg(0, ios::beg);        //go to start
    cout<<"CURRENT CONTENTS OF STOCK"<<"\n";
    while(inoutfile.read((char*) & item, sizeof(item)))
    {
        item.writedata();
    }
            inoutfile.clear(); //turn of EOF flag?? 

    //ADD ONE MORE ITEM
    cout<<"\n Add An Item\n";
    item.readdata();
    char ch;
    cin.get(ch);
    inoutfile.write((char*)&item, sizeof(item));
    inoutfile.flush();       //ensure the data is written to the file

    //Display the appended file
    inoutfile.clear();            //clear any eof flags from the previous operations
    inoutfile.seekg(0, ios::beg);
    cout<<"CONTENTS OF ADDED FILE\n";
    while(inoutfile.read((char*) & item , sizeof(item)))
    {
        item.writedata();
    }


//find the number of objects in the file
inoutfile.clear();

int last = inoutfile.tellg();
int n = last/sizeof(item);
cout<<"Number of objects: "<<n<<endl;
cout<<"File size: "<<last<<endl;
cout<<sizeof(item)<<endl;

//modify details of an item
cout<<"Enter object number to be updated: ";
int object;
cin >>object;
cin.get(ch);
int location = (object - 1) *sizeof(item);
if(inoutfile.eof())
inoutfile.clear();

inoutfile.seekp(location);
cout<<"Enter new values: "<<endl;
item.readdata();
cin.get(ch);

inoutfile.write((char*)&item, sizeof(item))<<flush;

//show updated file
inoutfile.clear();
inoutfile.seekg(0, ios::beg);
cout<<"Updated file: "<<endl;
while(inoutfile.read((char*) & item, sizeof (item)))
{
    item.writedata();
}
inoutfile.close();
return 0;
}
