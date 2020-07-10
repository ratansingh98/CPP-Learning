#include<iostream>
#include<string>

using namespace std;

int main(){
    []{cout<<"Hello world\n";}(); //Lambda function
    [](){return 100;}; //Lambda function that returns

    auto sum = [](auto a, auto b){return a+b;}; //Lambda with paramters

    cout<<"SUM of 2 and 5 is: "<<sum(2,5)<<endl;
    cout<<"SUM of 2.2 and 5.7 is: "<<sum(2.2,5.7)<<endl;

    string a = "abc";
    string b = "def";
    cout<<"SUM of a and b is: "<<sum(a,b)<<endl;
    return 0;
}