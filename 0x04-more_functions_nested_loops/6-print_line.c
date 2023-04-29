#include "main.h"

/**
 * print_line - program prints a straight line in the terminal
 * @n: number of times the _ character should be printed
 *
 * Return: void
 */
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
