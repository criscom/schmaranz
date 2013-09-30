// switch_test.c - demonstration of the switch statement

// at the moment we don't care how we would optain a real
// keyboard input. We just assume, it's in the variable

#include <stdio.h>

unsigned char keyboard_input_ = 'h';

int main(int argc, char const *argv[])
{
  switch (keyboard_input_)
  {
    case 'q':
      printf("user wants to quit\n" );
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
    defalut:
      printf("unknown user input: %c\n", keyboard_input_);
  }
  return 0;
}