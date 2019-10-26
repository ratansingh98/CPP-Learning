#include "stdio.h" // if we use quotes it will first search in current directory for the file

int main(){
    int i ;
    printf("Enter a number\t");
    scanf("%d",&i);
    printf("You have entered\t %d\n",i);
    return 0;
}