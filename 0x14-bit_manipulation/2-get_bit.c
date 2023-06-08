#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * get_bit - the program returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at index @index, or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

unsigned long int mask = 1UL << index;
unsigned long int bit = n & mask;

return (bit != 0) ? 1 : 0;
}
