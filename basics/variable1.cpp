#include<stdio.h>

using namespace std;
int main(){
	int i=12; // Declared variable type int and assign with value
	float f=123.132; // Declare variable type float  and assign with value
	double d=124.34243123; // Declare variable type double  and assign with value
	bool b= 0; // Declare variable type boolean and assign with value
	char c = 'c'; // Declare variable type character and assign with value
	char s[]="hello";// Declare variable type character array and assign with value
	auto a = "I am auto variable";// Declare variable that will be automatically identifed and assign with value
	printf("%d\n %f\n %lf\n %d\n %d\n %s\n %s\n",i,f,d,b,c,s,a);
	return 0;
}
