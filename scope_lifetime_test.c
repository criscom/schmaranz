// scope_lifetime_test.c - demonstration of scope and lifetime of variables

#include <stdio.h>

int my_var = 17; // global my_var

void showAutoVariableInFunction(int my_var)
{
  printf("my_var: %d\n", my_var ); // prints param my_var
  my_var = 38; // changes param my_var, but does not change the outer variable! It's a Call-by-value!
  printf("my_var: %d\n", my_var );
}

int main(int argc, char const *argv[])
{
  printf("my_var: %d\n", my_var ); // prints global my_var

    //it's also possible to just open a block anywhere!
  {
    int my_var = 25; // local my_var hides global my_var
    printf("my_var: %d\n", my_var ); // prints local my_var
    // block nested inside a block
    {
      int my_var = 60; // inner local my_var hides outer local my_var
      printf("my_var: %d\n", my_var );
    } // here inner local my_var's lifetime is over
    printf("my_var: %d\n", my_var ); // prints local my_var ==> 25
  } // here local my_var's lifetime is over

  printf("my_var: %d\n", my_var ); //prints global my_var
  showAutoVariableInFunction( my_var ); // call with parameter ...
  printf("my_var: %d\n", my_var ); // prints global my_var

  return 0;
}
