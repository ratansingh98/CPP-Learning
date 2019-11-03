#include<iostream>

using namespace std;

int main(){

    // String concatination
    string a,b,c;
    a = "Hello";
    b= "World";
    c = a+b;
    cout<<c<<endl;
    // Print length of string
    cout<<c.length()<<endl;

    // Print sub-string range
    cout<<c.substr(2,5)<<endl;

    //Find and print the first position of element
    cout<<c.find('W')<<endl;
    return 0;
}