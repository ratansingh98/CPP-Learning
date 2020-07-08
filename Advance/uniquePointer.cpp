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
        //unique_ptr<User> sam(new User()); //Not favourable
        unique_ptr<User> sam = make_unique<User>();
        sam->testFunc();

        //unique_ptr<User> samm = sam; //Not allowed
    }
    cout<<"Outside scope\n";
    
    return 0;
}