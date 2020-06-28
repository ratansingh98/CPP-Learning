#include<iostream>

using namespace std;


int main(){
    int n[5] = {5,2,4,1,3}; 
    int res[5];
    int t;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(n[i]>n[j]){
                t = n[j];
                n[j] = n[i];
                n[i] = t;
            }
        }        
    }
    for(int i=0;i<5;i++)
        cout<<n[i]<<endl;
    return 0;
}