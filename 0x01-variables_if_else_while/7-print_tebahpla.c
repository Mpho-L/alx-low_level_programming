#include <stdio.h>

/**
*main - Entry point for the program
*
*Description: This program uses putchar() and a while loop to print the
*letters of the alphabet in reverse order,
*followed by a new line character.
*
*Return: Always 0 (Success)
*/

int main(void)
{
const char *letter = "\nabcdefghijklmnopqrstuvwxyz";
int i = 0;
while (letter[i] != '\0')
{
i++;
}
for (i = i - 1; i >= 0; i--)
{
putchar(letter[i]);
}
return (0);
}
