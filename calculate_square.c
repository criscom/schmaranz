// calculate_square.c – demonstration of functions

// definition of a function that calculates the squre of number
// and returns the result

#include <stdio.h>

int square(int number)
{
  return(number * number);
}

// here program execution starts

main()
{
  int number = 0;
  printf("Please enter a number: ");
  scanf("%d",&number);
  printf("%d^2 = %d\n", number, square(number));
}