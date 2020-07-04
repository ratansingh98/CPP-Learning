#include<iostream>

using namespace std;


int getTwo(){
    return 2;
}

void intersting(){
    puts("I am intersting");
}


int main(){
    int whatIgot = getTwo();
    void (*pointsToIntersting)() = intersting; //Functional Pointer
    cout<< whatIgot<<endl;
    pointsToIntersting();
    (*pointsToIntersting)(); //Another way of calling
    return 0;
}