// volatile is needed if you are reading from a spot in memory that, say, a completely separate process/device/whatever may write to.
//Without volatile, the optimizer sees the loop as useless and code would proceed without having acquired the semaphore, causing problems later on.
//Its good to use a volatile keyword for variables that are accessed in multiple threads.Basically, without volatile,either writing multithreaded programs becomes impossible,or the compiler wastes vast optimization opportunities.
/* Compile code with optimization option */
#include<iostream>

using namespace std;

int main(){ 
    // Without Volatile
    const int local1 = 10; 
    int *ptr1 = (int*) &local1; 

    printf("Initial value of local : %d \n", local1); 
    *ptr1= 100; 
    printf("Modified value of local: %d \n", local1); 

    // With Volatile
    const volatile int local2 = 10; 
    int *ptr2 = (int*) &local2; 

    printf("Initial value of local : %d \n", local2); 

    *ptr2 = 100; 

    printf("Modified value of local: %d \n", local2); 

    return 0;
    
}