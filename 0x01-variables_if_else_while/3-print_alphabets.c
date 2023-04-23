#include <stdio.h>

/**
*main - entry point to the program 
*
*Description: This program prints the lowercase
*and uppercase alphabet followed by a new line character.
*
*Return: always 0 (success)
*/

int main(void)
{
const char *letter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
int i = 0;
while (letter[i] != '\0')
{
putchar(letter[i]);
i++;
}
return (0);
}
