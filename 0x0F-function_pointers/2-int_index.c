#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - the program searches for an integer in an array
 * @array: Pointer to an integer array
 * @size: Number of elements in the array
 * @cmp: Pointer to a function that takes an int parameter and returns an int
 *
 * Description: Searches for an integer in the given array using the provided
 * comparison function. Returns the index of the first element for which the
 * comparison function does not return 0. If no element matches or if the size
 * is less than or equal to 0, returns -1.
 *
 * Return: Index of the first matching element, or -1 if no match or invalid
 * input.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
if ((*cmp)(array[i]) != 0)
return (i);
}
}
return (-1);
}
