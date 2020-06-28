#include<iostream>

using namespace std;
int main()
{
    int integer_array[4] ={1,2,3,4};
    cout<<integer_array[0]<<endl;

    int another_array[4];
    another_array[0]=9;
    
    cout<<another_array[1]<<endl; //default value is zero
    

    *another_array = 29; //Assign value to first element
    cout<<another_array[0]<<endl;


    another_array[1]=19;
    cout<<another_array[1]<<endl;

    int *ap = another_array;
    ap++; //Points to second element
    *ap=209; //Assign value to second element
    cout<<another_array[1]<<endl;

    return 0;
} 
