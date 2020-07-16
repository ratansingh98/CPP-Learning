#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter number of cols"<<endl;
    cin>>n;

    for(int i=1,k=0;i<=n;i++,k=0){
        for(int j=1;j<=(n-i);j++){
            cout<<"  ";
        }

        while (k!=(2*i)-1)
        {
            if (k==0)
                cout<<i<<" ";
            else if(k==(2*i)-2)
                cout<<i;
            else
                cout<<"0 ";
            k++;
        }
        cout<<endl;
        
    }
    return 0;
}