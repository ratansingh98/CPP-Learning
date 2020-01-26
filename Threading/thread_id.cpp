// thread example
#include <iostream>       // std::cout
#include <thread>         // std::thread
#include<iostream>

using namespace std;

void bar(int x)
{
}

int main() 
{
  std::thread first (bar,1);     // spawn new thread that calls foo()
  std::thread second (bar,2);  // spawn new thread that calls bar(0)
  cout<<"Id of first thread :\t"<<first.get_id()<<endl;
  cout<<"Id of Second thread : \t"<<second.get_id()<<endl;

  cout<<"Number of threads on CPU : "<<first.hardware_concurrency()<<endl;
  // synchronize threads:
  first.join();                // pauses until first finishes
  second.join();               // pauses until second finishes


  return 0;
}