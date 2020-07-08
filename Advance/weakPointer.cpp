//Memory get free as scope ends and this pointers can have copy of them.
#include<iostream>
#include<memory>

using namespace std;

class User{
public:
    User(){
        cout<<"User Created\n";
    }

    ~User(){
        cout<<"User Destroyed\n";
    }

    void testFunc(){
        cout<<"I am a test function\n";
    }
};

int main(){
    {
        shared_ptr<User> tim = make_shared<User>();
        weak_ptr<User> wtim = tim; // Created a weak pointer
        shared_ptr<User> yo = wtim.lock(); // Using weak pointer back to shared 
        yo->testFunc();
    }
    
    
    cout<<"Outside scope\n";
    
    return 0;
}