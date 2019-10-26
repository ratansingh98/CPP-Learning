#include<iostream>

using namespace std;

/* In function overloading functions have same name but are differentiated based arguments passed. */

// add numbers of 3 arguments
int add(int a, int b, int c){
    return a+b+c;
}

// add numbers of 2 arguments
int add(int a, int b){
    return a+b;
}

int main(){
    // function with 2 arugments will be called
    cout<<add(10,20)<<endl;

    // functions with 3 agrumetns will be called
    cout<<add(10,20,40)<<endl;
}