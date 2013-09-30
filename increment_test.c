// increment_test.c - demonstration of increment operator specialities

#include <stdio.h>

int first_number_ = 0;
int second_number_ = 0;

int main(int argc, char const *argv[])
{
  // post-increment without assignment
  first_number_++;
  printf("first_number_ after post-increment: %d\n", first_number_); // Result = 1

  // pre-increment without assignment
  ++first_number_;
  printf("first_number_ after pre-increment: %d\n", first_number_); // Result = 2

  // pre-increment with assignment
  second_number_ = ++first_number_;
  printf("second_number_ after pre-increment assignement: %d\n", second_number_ ); // Result = 3

  // post-increment with assignment
  second_number_ = first_number_++;
  printf("second_number_ after post-increment assignment: %d\n", second_number_ ); // Result = 3; variable is set to 4
  printf("but first_number_ now has the value: %d\n", first_number_); // variable is 4

  // this also works when used as a parameter!
  printf("first_number_ pre-increment as parameter: %d\n", ++first_number_); // Result = 5
  printf("first_number_ post-increment as parameter: %d\n", first_number_++); // Result = 5; varialbe is set to 6
  printf("but first_number_ now has the value: %d\n", first_number_); // variable is 6

  return 0;
}