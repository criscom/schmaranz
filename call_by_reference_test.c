// call_by_reference_test.c – demo for call-by-reference in C

#include <stdio.h>

void changeVariable(int *var_to_change);

//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––
int main(int argc, char const *argv[])
{
  int test_var = 0;

  printf("test_var before call to changeVariable(...): %d\n", test_var); // result: 0

  changeVariable(&test_var);
  printf("test_var after call to changeVariable(...): %d\n", test_var ); // result: 985


  return 0;
}

//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––
void changeVariable(int *var_to_change)
{
  *var_to_change = 985;
}