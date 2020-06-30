#include<iostream>

using namespace std;

int main(){ 
    int a = 3;
    int b = 3;

    cout<<"Prefix\t"<<++a<<endl;
    cout<<"Prefix\t"<<++a<<endl;
    cout<<endl;
    cout<<"Suffix\t"<<b++<<endl;
    cout<<"Suffix\t"<<b++<<endl;
    return 0;
    
}