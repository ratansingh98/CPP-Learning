#include<iostream>

using namespace std;

//It is access based upon auto-increment
enum MsOffice: uint8_t{
    BOLD=5,
    ITALICS,
    UNDERLINE,
    COSSED
};

int main(){
    int myAttributes = UNDERLINE;

    cout<< myAttributes<<endl;
    return 0;
}