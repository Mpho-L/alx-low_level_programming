#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * clear_bit - the program sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

if (index >= (sizeof(unsigned long int) * 8))
return (-1);

mask = 1UL << index;
*n &= ~mask;

return (1);
}
