#include<iostream>

using namespace std;

int main(){
        int n;
    cout<<"Enter number of cols"<<endl;
    cin>>n;
    
    printf("0\n");
    for(int i=1;i<=n;i++){
        int k =0;
        while(k!=(n-i)){
            cout<<" ";
            k++;
        }
        for(int j=1;j<=i;j++){
            if((j==1)|| (j==i)||(i==n))
                cout<<"*";
            else
                cout<<" ";
        }
    cout<<endl;

    }


    return 0;
}