#include<iostream> 
using namespace std; 

//In this we have demonstrated Encapsulation using access specifiers
class Encapsulation 
{ 
    private: 
        // data hidden from outside world 
        int x; 

    public: 
        // function to set value of  
        // variable x 
        void set(int a) 
        { 
            x =a; 
        } 

        // function to return value of 
        // variable x 
        int get() 
        { 
            return x; 
        } 
}; 

// main function 
int main() 
{ 
    Encapsulation obj; 

    obj.set(5);   
    cout<<obj.get()<<endl; 
    return 0; 
} 