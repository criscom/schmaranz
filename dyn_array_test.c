// dyn_array_test.c - demo of dynamic arrays with pointers

#include <stdio.h>
#include <stdlib.h>

#define INITIAL_NUM_ELEMENTS 5
#define REALLOC_NUM_ELEMENTS 10

//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––
int main(int argc, char const *argv[])
{
  //requesting dynamic allocation of memory for the array
  int *test_array = malloc(INITIAL_NUM_ELEMENTS * sizeof(int));

  int count = 0;

  //assigning values to the elements of the array
  while(count < INITIAL_NUM_ELEMENTS)
    test_array[count++] = count * 2;

  // now let's have a look what the array contains
  for (count = 0; count < INITIAL_NUM_ELEMENTS; count++)
    printf("Element %d has the value %d\n", count, test_array[count] );


  // now let's make the array bigger
  test_array = realloc(test_array, REALLOC_NUM_ELEMENTS * sizeof(int));


  // just assign values to the new elements
  for (count = INITIAL_NUM_ELEMENTS; count < REALLOC_NUM_ELEMENTS; count++)
    test_array [count] = count * 2;


  // let's have a look what the array contains after that
  printf("\n***** after realloc *****\n");
  for (count = 0; count < REALLOC_NUM_ELEMENTS; count++)
    printf("Element %d has the value %d\n", count, test_array[count] );


  // ok, now we don't need the array any more, let's free it
  free(test_array);
  test_array = NULL;

  return 0;
}