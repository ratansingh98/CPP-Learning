#include<bits/stdc++.h>

using namespace std;

int main(){


    int n,i;
    cout<<"Enter a number to check prime\n";
    cin>>n;
    for(i=2;i*i<=n;i++){
        if(n%i==0) {cout<<"Not Prime Number\n";break;}
    }
    if(i*i>n) cout<<"Prime Number\n";
    return 0; 
}