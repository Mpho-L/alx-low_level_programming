#include <stdio.h>

/**
 *main - entry to the program
 *
 *Description: This program print all possible combinations of two different
 *digits, separated by comma and space. Numbers must be in ascending order and
 * separated by a comma, with no space after the last digit.
 *
 *Return: always 0 (success)
*/

int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
putchar('\n');
}
}
}
return (0);
}
