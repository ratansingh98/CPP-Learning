// ... represent variadic and it accept any input or data type

#include<iostream>
#include<string>

using namespace std;

template <typename T>
void func(T t){
    cout<<"First Func \t"<<t<<endl;
}

template <typename T,typename ... Args>
void func(T t,Args... args){
    cout<<"Second Func \t"<<t<<endl;
    func(args...);
}

int main(){
    string myName ="Ratan";
    func(myName);
    func(1,2,3.4,4.5,myName);
    return 0;
}