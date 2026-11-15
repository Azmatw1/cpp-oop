//reading and writing class objects
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
    inoutfile.open("STOCK.DAT", ios::ate|ios::in|ios::out|ios::binary|ios::trunc);
    inoutfile.seekg(0, ios::beg);        //go to start
    cout<<"CURRENT CONTENTS OF STOCK"<<"\n";
    while(inoutfile.read((char*) & item, sizeof(item)))
    {
        item.writedata();
    }
    inoutfile.close();           

    //ADD ONE MORE ITEM
    cout<<"\n Add An Item\n";
    item.readdata();
    char ch;
    cin.get(ch);
    inoutfile.write((char*)&item, sizeof(item));

    //Display the appended file
    inoutfile.seekg(0);
    cout<<"CONTENTS OF ADDED FILE\n";
    while(inoutfile.read((char*) & item , sizeof(item)))
    {
        item.writedata();
    }


//find the number of objects in the file
int last = inoutfile.tellg();
int n = last/sizeof(item);
cout<<"Number of objects: "<<n<<endl;
cout<<"File size: "<<last<<endl;

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
inoutfile.seekg(0);
cout<<"Updated file: "<<endl;
while(inoutfile.read((char*) & item, sizeof (item)));
{
    item.writedata();
}
inoutfile.close();
return 0;
}
