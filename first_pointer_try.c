// first_pointer_try.c - a first little try to demonstrate how pointers work in C


#include <stdio.h>

int main(int argc, char const *argv[])
{
  int my_var = 17;
  int *my_ptr = &my_var;

  printf("my_var: %d, accessed via my_ptr: %d\n", my_var, *my_ptr );


  // now changing the value of my_var directly
  my_var = 173;
  printf("my_var: %d, accessed via my_ptr: %d\n", my_var, *my_ptr );



  // it is also possible to change the value indirectly via the pointer
  *my_ptr = 728;
  printf("my_var: %d, accessed via my_ptr: %d\n", my_var, *my_ptr );


  return 0;
}