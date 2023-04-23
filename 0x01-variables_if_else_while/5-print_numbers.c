#include <stdio.h>

/**
 *main - entry to the program
 *
 *Description: This program declares an integer variable i and uses a for loop
 *to print its value from 0 to 9, followed by a new line character.
 *
 *Return: always 0 (success)
*/

int main(void)
{
int i;

for (i = 0; i < 10; i++);

printf("%d\n", i);

return (0);
}
