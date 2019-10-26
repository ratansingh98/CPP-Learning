#include<iostream>

using namespace std;

// The building block of C++ that leads to Object Oriented programming is a Class which contains data members and member functions.

//Defined class named student
class student{
    //public is an access specifier and student() is constructor
    public :student(){

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
    student s;

    s.setName("Ratan");
    cout<<s.getName()<<endl;
    return 0;
}