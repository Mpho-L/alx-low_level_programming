#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - the program allocates memory for an array and initializes it to
 * zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL if allocation fails
 *         or if nmemb or size is 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;
ptr = malloc(total_size);

if (ptr == NULL)
return (NULL);

memset(ptr, 0, total_size);

return (ptr);
}
