#include<iostream>

using namespace std;

template <typename T>
    T addme(T a, T b){
        return a+b;
    }


int main(){
    int i1=2;
    int i2=4;

    float f1 = 5.4;
    float f2= 7.7;

    cout<<addme(i1,i2)<<endl;
    cout<<addme(f1,f2)<<endl;

    return 0;
}