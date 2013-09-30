// scanf_test.c - sample scanf statements

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int number1 = 0;
  int number2 = 0;
  int number3 = 0;
  printf("Please enter two comma-separated numbers and press <enter>: ");
  scanf("%d, %d",&number1,&number2);
  printf("The numbers were: %d and %d\n", number1, number2 );
  number3 = number1 * number2;
  printf("The product of %d and %d is %d\n", number1, number2, number3 );
  number1 = 0;
  number2 = 0;
  printf("Now enter two numbers separated by the word \"and\" and press <enter>: ");
  scanf("%d and %d",&number1,&number2);
  printf("The numbers were: %d, %d\n", number1, number2 );
  number3 = number1 * number2;
  printf("The product of %d and %d is %d\n", number1, number2, number3 );
  return 0;
}