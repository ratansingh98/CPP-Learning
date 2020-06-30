#include<iostream>

using namespace std;

int main(){
    printf("Float size is %ld bits \n",sizeof(float) *8);
    printf("Double size is %ld bits \n",sizeof(double) *8);
    printf("Long Double size is %ld bits \n",sizeof(long double) *8);

    float my_p_value = 20.2 ;
    printf("Value of %f \n",my_p_value);
    my_p_value=+ 20.2;
    if(my_p_value ==40.400002)
        puts("Yu got it right");
    else
        puts("Something");
    
    printf("My P values is :%1.30f in float\n",my_p_value); // Not that precise
}