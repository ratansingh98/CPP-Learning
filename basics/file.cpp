#include<iostream>
#include<fstream> // Libraty for file management
using namespace std;

int main(){
    ofstream outfile; //Output file stream.
    outfile.open("demo.txt"); //open file
    cout<<"File is writing"<<endl;
    outfile<<"Hello World\n";
    outfile<<"My name is ratan.\n";
    cout<<"File is written"<<endl;
    return 0;
}