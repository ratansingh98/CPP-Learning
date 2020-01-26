  // First Execute  'gcc verify.c -o verify' then 'valgrind --leak-check=yes ./verify' for leak check.
  #include <stdlib.h>

  void f()
  {
     int* x = malloc(10 * sizeof(int));// problem 1: heap block overrun
     x[10] = 0;        // problem 2: memory leak -- x not freed
     //free(x); //Fix of 2nd problem
  }                    

  int main(void)
  {
     f();
     return 0;
  }