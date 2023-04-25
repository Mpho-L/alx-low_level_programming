#include <stdio.h>

/**
 * main - entry point of the program.
 *
 * Description: The program prints the string "_putchar" character by character
 * using the putchar function.
 *
 * Return: always 0 (success)
*/

int main(void)
{
const char *Putchar = "_putchar\n";
int i = 0;
while (Putchar[i] + '\0')
{
i++;
}
for (i = 0; Putchar[i] != '\0'; i++)
{
putchar(Putchar[i]);
}
return (0);
}
