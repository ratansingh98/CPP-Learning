//Macros are represented as capital letters
#include<iostream>
#include<string>

//Defined macros
#define END return 0 
#define ENDMESSAGE cout<<"Program ends here\n"
#define B_INT int
#define console_log(a) cout<<a<<endl

using namespace std;

int main(){
    B_INT a = 4;
    
    cout<<a<<endl;
    console_log("YO");
    ENDMESSAGE;
    END;
}