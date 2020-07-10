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

    sort_heap(numbers,numbers+6); //Uses heap sort, which is fastest algo till now
    cout<<"Heap sorted values: "<<endl;
    for(int i: numbers)
        cout<<i<<" ";
    cout<<endl;

    return 0;
}