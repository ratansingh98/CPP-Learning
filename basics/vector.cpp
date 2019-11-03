#include<iostream>
#include<vector> // STL for vector datatype
#include <bits/stdc++.h>  //Standard sorting 

using namespace std;

int main(){
    vector<int> v; //Create vector data variable

    // Push back insert element at end of vector 
    v.push_back(12);
    v.push_back(20);
    v.push_back(31);
    v.push_back(20);
    v.push_back(31);
    cout<<"Vectors after push back"<<endl;
    // begin() indicates iterator pointing and  
    // end() indicates iterator pointing to the theoretical element that follows the last element in the vector.
    for(auto i=v.begin();i!=v.end();i++)
        cout<<*i<<endl;
    
    // inserts 3 at the 2nd position.
    v.insert(v.begin()+2, 3); 

    cout<<"Vector after insertion"<<endl;
    // Print vector
    for(auto i=v.begin();i!=v.end();i++)
        cout<<*i<<endl;
    
    // Pop back() pops or remove elements from a vector from the back.
    v.pop_back();
    v.pop_back();
    cout<<"After popping vectors will be"<<endl;
    for(auto i=v.begin();i!=v.end();i++)
        cout<<*i<<endl;

    // Sorting vector
    sort(v.begin(),v.end());
    cout<<"Vectors after sorting will be"<<endl;
    for(auto i=v.begin();i!=v.end();i++)
        cout<<*i<<endl;



    return 0;
}