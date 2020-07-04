// It is a function which call itself but with an exit strategy.

#include<iostream>

using namespace std;

int factorial(int);

int main(){
    int n;
    cout<<"Enter a value: ";
    cin>>n;
    cout<<"Your factorial is :"<<factorial(n)<<endl;
    return 0;
}

int factorial(int n){
    if (n<=1)
        return 1;
    else
        return n*factorial(n-1);
    
}