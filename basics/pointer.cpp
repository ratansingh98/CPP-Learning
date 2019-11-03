#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *p; // Create pointer variable
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The sise of variable is "<<sizeof(a)<<endl;
    cout<<"The value of a is "<<a<<endl;

    p = &a; // Copy address of a to pointer variable p.
    cout<<"The address of p is "<<p<<endl;
    return 0;
}