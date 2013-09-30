// while_test.c - demonstration of the while loop

#include <stdio.h>

unsigned count_ = 5;

int main(int argc, char const *argv[])
{
  //counts  down to 0 and prints intermediate numbers
  while(count_ > 0)
  {
    count_--;
    printf("%u ", count_ );
  }
  printf("\n");

  // the same can also be written as follows

  count_ = 5; //set start value again
  while(count_--)
    printf("%u ", count_);
  printf("\n");

  // but be careful when using count_ afterwards!
  printf("count_ after the end of the loop: 0x%x and as a decimal: %d\n", count_, count_ );
  return 0;
}