#include<iostream>

using namespace std;

// The building block of C++ that leads to Object Oriented programming is a Class which contains data members and member functions.

//Defined class named student
class student{
    //public is an access specifier and student() is constructor
    public :student(){

    }

    //public is an access specifier and student() is constructor
    public :student(string name){
        this->name = name;
    }

    // Create data members
    string name;

    // Function to set name, here 
    void setName(string name){
        //here this shows that variable belongs to this class
        this->name = name;
    }

    string getName(){
        return this->name;
    }
};

int main(){

    //Object is instance of class
    // Create object
    student s1;
    s1.setName("Ratan");
    cout<<s1.getName()<<endl;

    // Create object using our custom constructor
    student s2("Zeref");
    cout<<s2.getName()<<endl;

    return 0;
}