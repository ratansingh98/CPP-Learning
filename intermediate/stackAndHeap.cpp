
#include<iostream>

struct User{
    const int id;
    int age;
    User(): id(001),age(22){}
};


int main(){
    using namespace std;
    //Stack is the fastest memory. It has predefined size.
    int score =100; // This is stack memory.
    User mike;

    // Heap is predefined but can grow as per need. Not as much fast as stack.
    int * heap_score= new int;
    *heap_score =200;

    User *nike = new User();
    delete heap_score;
    delete nike;

    return 0;
}