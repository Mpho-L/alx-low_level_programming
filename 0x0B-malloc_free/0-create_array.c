#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - the program creates an array of chars and initializes
 * it with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: On success, a pointer to the array. On failure or if size is 0, NULL.
*/

char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}
char *array = malloc(sizeof(char) * size);
if (array == NULL)
{
return (NULL);
}
for (unsigned int i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
