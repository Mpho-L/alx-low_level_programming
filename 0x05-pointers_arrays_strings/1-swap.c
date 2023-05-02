#include <stdio.h>

/**
*swap_int - entry point to the program
*
*Description: The 'swap' function takes two integer pointers as parameters and
*swaps the values of the two variables they point to using a temporary
*variable.
* @a: A pointer to an integer value.
* @b: A pointer to an integer value.
*
*/

void swap_int(int *a, int *b)
{

int temp;

temp = *a;
*a = *b;
*b = temp;
}
