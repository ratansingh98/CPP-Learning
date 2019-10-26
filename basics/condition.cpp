#include<iostream>

using namespace std;
int main(){
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    if (num <=10){
        cout<<"your number is small"<<endl;
    }
    if (num%2==0){
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }

    if(num%3==0){
        cout<<"number is divisible by 3"<<endl;
    }
    else if (num%5==0){
        cout<<"number is divisible by 5"<<endl;
    }
    else{
        cout<<"number is not divisble by 3 and 5"<<endl;
    }

    return 0;
}