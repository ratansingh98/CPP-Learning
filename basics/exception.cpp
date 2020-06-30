#include<iostream>

using namespace std;

int main(){ 
    // Uncomment one of the following line
    //int call_api = 2;
    //float call_api = 2.2;
    //char call_api = 'R';
    try
    {
        cout<<"trying to use API value\n";
        cout<<"Did some testing with api value\n";
        throw call_api;
        cout<<"NO code execute after return and throw\n";
    }
    catch(int x)
    {
        cout<<"Integer exception handled\n";
    }catch(float f){
        cout<<"Float exception handled\n";
    }catch(...){ // Catch any type of error
        cout<<"Something went wrong\n";
    }

    
    cout<<"Keep on moving with rest of code\n";
    return 0;
    
}