#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * print_binary - the program prints the binary representation of a number.
 * @n: The number to print in binary.
 */

void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);

putchar((n & 1) + '0');
}
