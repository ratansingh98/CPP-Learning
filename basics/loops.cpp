#include<iostream>
using namespace std;

int main(){
    // For loop - entry control loop
    cout<<"for loop"<<endl;
    for(int i=0;i<10;i++)
        cout<<i<<endl;

    cout<<endl;
    cout<<"While loop"<<endl;
    // While loop - entry control loop
    int i =0;
    while(i<10){
        cout<<i<<endl;
        i++;
    }
        
    cout<<endl;
    cout<<"Do while loop"<<endl;
    // Do while loop - exit control loop
    i =0;
    do{
        cout<<i<<endl;
        i++;
    }while(i<10);
    
    
    return 0;
}