#include <stdio.h>

/**
 *main - entry to the program
 *
 *Description: This program prints the digits 0 through 9 separated by commas
 *
 *Return: always 0 (success)
*/

int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i != 10)
putchar(', ');
}
putchar('\n');
return (0);
}
