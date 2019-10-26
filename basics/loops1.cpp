#include<iostream>

using namespace std;

int main(){
    for(int i=0; i<10; i++){
        // Continue will make continue the loop without executing next line.
        if (i==5)
            continue;
        // Break will make break the loop and execution will jump to next line.
        if (i==7)
            break;
        cout<<i<<endl;
    }
    return 0;
}