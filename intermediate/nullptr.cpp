#include<iostream>
#define NULL 0  //Marco is redefined here

void printval(int a){
    printf("Interger value is %d\n",a);
}


void printval(double a){
    printf("Double value is %f\n",a);
}


void printval(int *a){
    printf("Pointer value is %p\n",a);
}


int main(){
    printval(5);
    printval(5.3);
    printval(NULL); // null is ambiguous
    printval(nullptr); //Real way of handling null values
    return 0;
}