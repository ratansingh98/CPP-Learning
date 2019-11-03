// C program to demonstrate the use of calloc() 
// and malloc() 
#include <stdio.h> 
#include <stdlib.h> 
#include<iostream>

using namespace std;
int main() 
{ 
int *arr1,*arr2; 
	
// malloc() allocate the memory for 5 integers 
// containing garbage values 
arr1 = (int *)malloc(5 * sizeof(int)); // 5*4bytes = 20 bytes 

cout<<"For malloc"<<endl;

/* Initializing memory block */
	for (int i=0; i<5; i++)
	{
		arr1[i] = i*1.5;
	}

for(int i =0;i<5;i++)
    printf("%d\n",*(arr1+i));
// Deallocates memory previously allocated by malloc() function 
free( arr1 ); 
	
// calloc() allocate the memory for 5 integers and 
// set 0 to all of them . Second argument indicates size of each element.
// Calloc return address of memory block as void. In case of failure returns null pointer.

arr2 = (int *)calloc(5, sizeof(int));

/* Initializing memory block */
	for (int i=0; i<5; i++)
	{
		arr2[i] = i*1.5;
	}
    
cout<<"For calloc"<<endl;
for(int i =0;i<5;i++)
    cout<<*(arr2+i)<<endl;


/* reallocating memory */
arr2 = (int*) realloc(arr2, 10*sizeof(int));

/* Initializing memory block */
	for (int i=5; i<10; i++)
	{
		arr2[i] = i*1.5;
	}
cout<<"After realloc"<<endl;
for(int i =0;i<10;i++)
    cout<<*(arr2+i)<<endl;
// Deallocates memory previously allocated by calloc() function 
free(arr2); 



return(0); 
} 
