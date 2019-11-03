// It says that variable wont change, making const also increase speed
#include<iostream>

using namespace std;
const void printFun(){
    cout<<"I am print function"<<endl;
}
int main(){
    const int num =10;
    printFun();
    // Uncomment below to see error message
    //num =11;
    return 0;
}