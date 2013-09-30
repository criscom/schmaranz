// double_pointer_test.c - Pointers to pointers are also possible

#include <stdio.h>

int my_var_1_ = 0;
int my_var_2_ = 320;

void changePointer(int **var_to_change);

//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––
int main(int argc, char const *argv[])
{
  int *test_ptr = &my_var_1_;

  printf("*test_ptr before calling changePointer(...): %d\n", *test_ptr); // Result: 0

  changePointer(&test_ptr);
  printf("*test_ptr after calling changePointer(...): %d\n", *test_ptr); // Result: 320


  return 0;
}

//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––
void changePointer(int **var_to_change)
{
  *var_to_change = &my_var_2_;
}