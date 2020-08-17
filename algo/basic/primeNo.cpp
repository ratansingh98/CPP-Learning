#include<iostream>

using namespace std;

int main(){
    int n,i;
    cout<<"Enter a number : ";
    cin>>n;
    for(i=n-1;i>=2;i--){
        if (n%i==0){
            cout<<"Not prime"<<endl;
            break;
        }
    }   
    if(i==1){
    cout<<"Prime"<<endl;
    }
        
    
    return 0;
}