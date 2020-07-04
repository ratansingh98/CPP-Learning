#include<iostream>

using namespace std;

struct User{
    const int uId;
    const char *name;
    const char *email;
    int course_count;
};

int main(){
    User mickey ={001,"mickey","mickey@disney.com",2};
    User donald ={002,"donald","donald@disney.com",3};

    donald.course_count =4; 
    //donald.uId =3;  //const variable cannot be changed
    donald.email = "donald@cartoon.com"; //can be changed because only pointer is const, not the value.
    cout<<donald.email<<endl;

    User *d = &donald; //Define reference pointer.
    d->name = "ratan"; //Now the const value can be changed
    cout<<d->name<<endl;
    return 0;
}