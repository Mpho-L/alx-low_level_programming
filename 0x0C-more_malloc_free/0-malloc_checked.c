#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - the program allocates memory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 * If malloc fails, the function terminates with status value of 98
*/
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
        exit(98);

    return ptr;
}
