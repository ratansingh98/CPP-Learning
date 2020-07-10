#include<iostream>
#include<string>

using namespace std;

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b=tmp;
    
}
string printMe(){
    return "I am print";
}
void bestSwap(int &a, int &b){
    int tmp = move(a);
    a = move(b);
    b=move(tmp);
    
}
int main(){
    int a=3,b=4;
    //swap(a,b);  //Memory exhaustive 
    bestSwap(a,b); //Better memory optimization
    cout<<"A : "<<a<<endl;

    string s1 = printMe(); //Have copy of value

    string&& s2 = printMe(); //It reference to the function
    return 0;
}