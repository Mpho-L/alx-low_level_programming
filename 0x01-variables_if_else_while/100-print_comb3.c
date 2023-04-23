#include <stdio.h>

/**
 *main - entry to the program
 *
 *Description: This program print all possible combinations of two different digits,
 * separated by comma and space. Numbers must be in ascending order and
 * separated by a comma, with no space after the last digit.
 *
 *Return: always 0 (success)
*/

int main(void)
{
int i, n;

for (i = 0; i < 9; i++)
{
for (n = 1; n < 10; n++)
{
putchar(i + '0');
putchar(n + '0');
if (i != j)
if (i != 9 || n != 9)
putchar(',');
if (i != 9 || n != 9)
putchar(' ');
}
}
putchar('\n');
return (0);
}
