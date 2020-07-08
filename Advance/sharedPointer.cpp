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
        tim->testFunc();
        shared_ptr<User> timm = tim;    //Allowed here
        timm->testFunc();
    }
    cout<<"Outside scope\n";
    
    return 0;
}