#include "extern_header.h"

// since global_x still needs to be defined somewhere,
// we define it (for example) in this source file
#include<iostream>

using namespace std;


int main()
{
    // Access global_x defined in header file.
    extern int global_x;
    cout << "global_int = " << global_x<<endl;


}