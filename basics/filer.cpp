#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string line;
    fstream myfile("demo.txt");
    if(myfile.is_open()){
        while(getline(myfile,line)){
            cout<<line<<endl;
        }
    }
    else
        cout<<"File Does not exist"<<endl;
    return 0;
}