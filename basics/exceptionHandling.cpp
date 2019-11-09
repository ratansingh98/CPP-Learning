#include <iostream> 
using namespace std; 

int main() 
{ 
	try { 
	//throw 10; // Throws int exception (uncomment this)
    //throw "yo";  // Throws string exception (uncomment this)
	} 
	catch (int excp) {  //Catch exception with parameter
		cout << "Caught " << excp<<endl;  //Executes for exception
	} 
	catch (...) {  // Catch All exception
		cout << "Default Exception\n"; 
	} 
	return 0; 
}
