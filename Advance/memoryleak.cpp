#include<iostream>

using namespace std;

int main(){ 
    int * myp;
    try
    {
        myp = new int[100]; // Forcefully allocating new memory.
        cout<<"Memort space allocated\n";
    }
    catch(...)
    {
        cout<<"Failed in allocating memory\n";
    }
    
    delete [] myp; //Memory must be deleted if new memory is allocated.
    return 0;
    
}