#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter number of cols\n";
    cin>>n;
    for(int i=n;i>0;i--){
        for(int k=n;k>i;k--)
            cout<<" ";
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}