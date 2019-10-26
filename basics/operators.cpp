#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    //Assignment operator
    a = 10;
    b = 12;
    cout<<a<<"\t"<<b<<endl;

    //mathematical operator;
    a +=1;
    b -=1;

    //Relational operator
    cout<<(a<b)<<endl;
    cout<<(a>b)<<endl;
    cout<<(a==b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a>=b)<<endl;

    //Logical operator
    a = 12;
    b =20;
    c = 30;
    cout<<(a<b && c>a)<<endl;
    cout<<(a>b || c>a)<<endl;

    //unary operators
    cout<<a++<<endl;
    cout<<b++<<endl;

    //Ternary operator
    a = 10;
    a > 5 ? cout << "true" : cout << "false";
    cout<<endl;
    return 0;
}