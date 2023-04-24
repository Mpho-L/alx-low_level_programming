#include <stdio.h>

/**
 *main - entry to the program
 *
 *Description: This program prints all possible three-digit numbers separated
 *by commas.
 *
 *Return: always 0 (success)
*/

int main(void)
{
int i, n, z;

for (i = 0; i < 8; i++)
{
for (n =i + 1; n < 9; n++)
{
for (z =n + 1; z < 10; z++)
{
putchar(i + '0');
putchar(n + '0');
putchar(z + '0');

if (i != 7 || n != 8 || z != 9)
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
