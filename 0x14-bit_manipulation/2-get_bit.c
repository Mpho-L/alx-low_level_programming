#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to retrieve the bit from.
 * @index: The index of the bit to get.
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;
int bit;
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

mask = 1UL << index;
bit = (n & mask) >> index;

return (bit);
}
