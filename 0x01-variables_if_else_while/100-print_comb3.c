#include <stdio.h>

/**
 *main - entry to the program
 *
 *Description: This program prints all possible two-digit numbers
 *separated by commas, with the smallest combination
 *of digits where duplicates are excluded.
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
if (i == 8 && n == 9)
break;
/*if (i != 9 || n != 9)
*/
putchar(',');
/*
if (i != 9 || n != 9)
*/
putchar(' ');
}
}
putchar('\n');
return (0);
}
