#include<iostream>
#include<fstream>

using namespace std;
const char* filename = "BINARY";
int main(){
    float height[4]={175.5, 153.0, 167.25, 160.70};
    ofstream outfile;
    outfile.open(filename);

    outfile.write((char*) & height, sizeof(height));      //address of height i.e our array is is cast to type char*.
    outfile.close();

    for(int i=0; i<4; i++){          //clearing the array in our program
        height[i]=0;

    }

    ifstream infile;
    infile.open(filename);
    infile.read((char*) & height, sizeof(height));
    for(int i=0; i<4; i++ ){                   //reading the array from the file
        cout<<height[i]<<"\n";
    }
    infile.close();

    return 0;



}