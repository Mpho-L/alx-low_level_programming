#include <stdio.h>

/**
 *main - entry to the program
 *
 *Description: This program uses putchar() to print the numbers 0-9 and the
 *letters A-F in hexadecimal, followed by a new line character.
 *
 *Return: always 0 (success)
*/

int main(void)
{
int i;

for (i = 0; i < 16; i++)
if (i < 10)
{
putchar(i + '0');
}
else
{
putchar(i - 10 + 'A');
}
putchar('\n');
return (0);
}
