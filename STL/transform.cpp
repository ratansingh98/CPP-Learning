#include<iostream>
#include <bits/stdc++.h>  
#include <algorithm>

using namespace std;

int square(int x){
    return x*x;
}
int main(){

    int numbers[6] = {3,2,6,4,7,9};
    cout<<"Values are: "<<endl;
    for(int i: numbers)
        cout<<i<<" ";
    cout<<endl;
    int res[6];
    transform(numbers,numbers+6,res,square);
    cout<<"Values after square are: "<<endl;
    for(int i: res)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}