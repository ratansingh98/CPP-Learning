#include<iostream>

using namespace std;

class student{
    
    public: student();
            ~student();

};

// Constructor
student::student(){
    cout<<"Constructor is created"<<endl;
}

// Destructor
student::~student(){
    cout<<"Destructor is created"<<endl;
}


int main(){
    // Create object
    student s1;
    student s2;
    return 0;
}

// Destuctors are called just before program terminates