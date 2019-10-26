#include<iostream>

using namespace std;

// Function which take 2 integer arugments and return integer value
int mul(int a, int b){
 return a*b;
}
int main(){

    int a,b;
    cout<<"enter 2 numbers"<<endl;
    cin>>a>>b;
    // Calls and print the returned vale
    cout<<mul(a,b)<<endl;
    return 0;
}