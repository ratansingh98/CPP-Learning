#include <iostream> 
using namespace std; 
  

// argc(ARGument Count) i indicates how many parameters are passed 
//argv(ARGument Vector) indicates array of character pointers listing all the arguments
int main(int argc, char** argv) 
{ 
    cout << "You have entered " << argc 
         << " arguments:" << "\n"; 
    for (int i = 0; i < argc; ++i) 
        cout << argv[i] << "\n"; 
  
    return 0; 
} 