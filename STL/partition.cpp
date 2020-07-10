#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;

int main(){

    vector<int> myints = {1,2,3,4,5,6,7,8,9,10};

    for(int x: myints){
        cout<< x <<" ";
    }
    cout<<"\n";



    //Partition will place values based upon the provided function's condition while trying to maintain the order
    stable_partition(myints.begin(),myints.end(),[](auto x){return x%2==0;});
        for(int x: myints){
        cout<< x <<" ";
    }
    cout<<endl;

    /**
    //Partition will place values based upon the provided function's condition
    partition(myints.begin(),myints.end(),[](auto x){return x%2==0;});
        for(int x: myints){
        cout<< x <<" ";
    }
    **/
    cout<<endl;
    return 0;
}