// The register storage class is used to define local variables that should be stored in a register instead of RAM. Making it quick to access.
#include<iostream>

using namespace std;

int main(){ 
    register int  miles;
    miles = 100;

    printf("%d\n",miles);
    return 0;
    
}