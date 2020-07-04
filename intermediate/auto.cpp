#include <iostream>
#include <string>
using namespace std;

string api_call(){
    return "got some data from web\n";
}

int another_api_call(){
    return 5;
}

int main() {
    auto reponse = api_call();
    auto rep = another_api_call();
    
    cout << "API CALL VALUE: " << reponse;
    cout << "Another API CALL VALUE: " << rep << endl;
    
    if (typeid(reponse) == typeid(string)) {
        puts("Type of both ID matches\n");
    }
    
    if (typeid(rep) == typeid(int)) {
        puts("Type of both ID is int\n");
    }
    
    return 0;
}
