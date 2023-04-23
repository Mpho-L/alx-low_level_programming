#include <stdio.h>

/**
 *main - entry to the program
 *
 *Description: This program declares an integer variable i and prints
 *the numbers 0 to 9 to the console using a for loop and the putchar function.
 *Return: always 0 (success)
*/

int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
