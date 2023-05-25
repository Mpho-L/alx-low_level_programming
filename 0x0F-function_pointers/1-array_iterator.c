#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - the program executes a function on each element of an array
 * @array: Pointer to an integer array
 * @size: Size of the array
 * @action: Pointer to a function that takes an int parameter and returns void
 *
 * Description: This program takes an array, its size, and a function pointer
 * as parameters. It iterates over each element of the array and calls the
 * provided function on each element. The function checks if the array and
 * function pointer are not NULL before performing the iteration.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
}
