#include <stdio.h>

/**
 *main - entry to the program
 *
 *Description: This program prints all possible two-digit numbers separated
 *by commas.
 *
 *Return: always 0 (success)
*/

int main(void)
{
int i, n;

for (i = 0; i < 10; i++)
{
for (n = 1; n < 10; n++)
{
putchar(i + '0');
putchar(n + '0');

if (i != 8 || n != 9)
putchar(',');
if (i != 8 || n != 9)
putchar(' ');
}
}
putchar('\n');
return (0);
}
