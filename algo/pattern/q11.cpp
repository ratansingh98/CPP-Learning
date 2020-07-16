#include<iostream>

using namespace std;

int perm(int n){
    int res=1;
    for(int i=n;i>0;i--)
        res *=i;
    return res;
}
int combination(int n,int r){
    int val = perm(n)/(perm(n-r)*perm(r));
    return val;
}
int main(){
        int n;
    cout<<"Enter number of cols"<<endl;
    cin>>n;
    
	for (int i = 0; i < n; i++)
	{
        for(int j=n;j>i;j--)
            cout<<" ";
		for(int j = 0; j <= i; j++)
		{
			cout<<combination(i,j)<<" ";
		}
		cout<<endl;
	}

    return 0;
}