#include<iostream>

using namespace std;

//We often come around situations where we need to store a group of data whether of similar data types or non-similar data types.
//Declartion of struct
struct student{
 int x,y;
};

int main(){
    student s;
    s.x =10;
    s.y = s.x+10;
    cout<<s.x<<"\t"<<s.y<<endl;
    return 0;
}