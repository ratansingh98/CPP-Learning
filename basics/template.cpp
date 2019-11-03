#include<iostream>

using namespace std;


//Create template
template<typename T>
T myMax(T x1, T x2){
    return x1>x2 ? x1:x2;
}

int main(){
    cout << myMax<int>(3, 7) << endl;  // Call myMax for int 
    cout << myMax<double>(3.0, 7.0) << endl; // call myMax for double 
    cout << myMax<char>('g', 'e') << endl;   // call myMax for char 
    return 0;
}