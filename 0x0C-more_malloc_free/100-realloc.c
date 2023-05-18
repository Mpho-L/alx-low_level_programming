#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - the program reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size of the allocated space for ptr.
 * @new_size: New size of the memory block.
 *
 * Return: Pointer to the reallocated memory block, or NULL if new_size is 0.
 * and ptr is not NULL, or if memory allocation fails.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
new_ptr = malloc(new_size);
return (new_ptr);
}

if (new_size == old_size)
return (ptr);

new_ptr = malloc(new_size);

if (new_ptr == NULL)
return (NULL);

if (new_size < old_size)
old_size = new_size;

memcpy(new_ptr, ptr, old_size);
free(ptr);

return (new_ptr);
}
