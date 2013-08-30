// test_types.c - This program prints the size of the internal
// representations of primitive C datatypes

#include <stdio.h>

char a_char = '\0';
int an_int = 0;
short a_short = 0;
long a_long = 0;
float a_float = 0.0f;
double a_double = 0.0;

main ()
{
printf("Size of char: \t%ld  Byte(s)\n",sizeof(a_char));
printf("Size of int: \t%ld  Byte(s)\n",sizeof(an_int));
printf("Size of short: \t%ld  Byte(s)\n",sizeof(a_short));
printf("Size of long: \t%ld  Byte(s)\n",sizeof(a_long));
printf("Size of float: \t%ld  Byte(s)\n",sizeof(a_float));
printf("Size of double: %ld  Byte(s)\n",sizeof(a_double));
}

