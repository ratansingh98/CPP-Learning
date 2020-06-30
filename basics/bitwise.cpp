#include<iostream>

using namespace std;

int main(){ 
    unsigned int x =6;
    unsigned int y = 7;

    // perform bitwise and
    unsigned int z = x&y;
    cout<<"Value of z after AND operation is: "<<z<<endl;

    // perform bitwise or
    z = x|y;
    cout<<"Value of z after OR operation is: "<<z<<endl;

    // perform bitwise not;
    z = ~x;
    cout<<"Value of x after NOT operation is: "<<z<<endl;

    // perform bitwise left shift by 2;
    z = x>>2;
    cout<<"Value of x after Left shift operation by 2 is: "<<z<<endl;

    // perform bitwise right shift by 2;
    z = x<<2;
    cout<<"Value of x after right shift operation by 2 is: "<<z<<endl;
    return 0;
    
}