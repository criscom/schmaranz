// switch_test20130923.c demonstration of the switch statement

#include <stdio.h>

unsigned char keyboard_input_ = 'h';

int main(int argc, char const *argv[])
{
  printf("Press the 'q', 'p', 'h' or 'c' key \n");
  scanf("%c",&keyboard_input_);

  switch (keyboard_input_)
  {
    case 'q':
      printf("user wants to quit\n");
      break;
    case 'p':
    case 'P':
      printf("user wants to print\n");
      break;
    case 'h':
      printf("user wants help\n");
      break;
    case 'c':
      printf("user wants the calculator\n");
      break;
    default:
    printf("unknown user input: %c\n", keyboard_input_ );

  }
  return 0;
}