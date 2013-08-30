// ifelse_test.ce -demonstration, how if - else statements work

#include <stdio.h>

int my_testvar1_ = -8;
int my_testvar2_ = 0;
int my_testvar3_ = 5;

main()
{
  if (my_testvar1_ >= 0)
    printf("my_testvar_1_ >= 0\n");
  else
    printf("my_testvar_1_ < 0\n");

// a more complex condition:
if ((my_testvar1_ < my_testvar2_) &&
  (my_testvar2_ < my_testvar3_))
  printf("my_testvar2_ lies between the others\n");

// this could also be written as
if (my_testvar1_ < my_testvar2_)
{
  if (my_testvar2_ < my_testvar3_)
    printf("my_testvar2_ lies between the others\n");
}

// 0 means false, != 0 means true, as can be seen here:
if (my_testvar2_)
  printf("condition is true\n");
else
  printf("condition is false\n");

//some blocks rather than simple statements
if (my_testvar1_ < my_testvar2_)
{
  printf("my_testvar1_ is smaller than my_testvar2_ ");
  if (my_testvar1_ == 0)
    printf("and it is zero\n");
  else
  {
    if( my_testvar1_ < 0)
      printf("and it is negative\n");
    else
      printf("and it is positive\n");
  }
}
else
{
  printf("my_testvar1_ is greater than my_testvar2_ ");
  if (my_testvar1_ == 0)
    printf("and it is zero\n");
  else
  {
    if (my_testvar1_ <0)
      printf("and it is negative\n");
    else
      printf("and it is positive\n");
  }
}

} // main