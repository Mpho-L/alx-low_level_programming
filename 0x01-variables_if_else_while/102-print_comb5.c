#include <stdio.h>

/**
 *main - entry to the program
 *
 *Description: This program prints all possible two two-digit numbers separated
 *by commas.
 *
 *Return: always 0 (success)
*/

int main(void)
{
int i, n, z, t;

for (i = 0; i < 8; i++)
{
for (n = 0; n < 9; n++)
{
for (z = 0; z < 10; z++)
{
for (t = 1; t < 10; t++)
{
putchar(i + '0');
putchar(n + '0');
putchar(' ');
putchar(z + '0');
putchar(t + '0');
if (i != 9 || n != 9 || z != 9 || t != 9)
putchar(',');
}
}
}
}
putchar('\n');
putchar(' ');
return (0);
}
