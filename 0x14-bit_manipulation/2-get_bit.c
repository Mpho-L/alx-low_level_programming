#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * set_bit - the program sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;
unsigned long int bit;
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
mask = 1UL << index;
bit = n & mask;
return ((bit != 0) ? 1 : 0);
}
