#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - the program creates an array of integers from min to max
 * (inclusive).
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: Pointer to the newly created array, or NULL if min > max
 * or if memory allocation fails.
*/

int *array_range(int min, int max)
{
int *arr;
int size, i;

if (min > max)
return (NULL);

size = max - min + 1;
arr = malloc(sizeof(int) * size);

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = min++;

return (arr);
}
