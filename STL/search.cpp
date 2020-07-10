#include<iostream>
#include <bits/stdc++.h>  //STL
using namespace std;

int main(){

    int numbers[6] = {3,2,6,4,7,9};
    cout<<"Unsorted values: "<<endl;
    for(int i: numbers)
        cout<<i<<" ";
    cout<<endl;
        
    sort(numbers,numbers+6); //Uses Introspective sort, which is fastest algo till now
    cout<<"Sorted values: "<<endl;
    for(int i: numbers)
        cout<<i<<" ";
    cout<<endl;

    //Find if number exists
    if (binary_search(numbers,numbers+6,17)){
        cout<<"Number Found"<<endl;
    }else
    {
        cout<<"Number Not Found"<<endl;
    }
    
    
    return 0;
}