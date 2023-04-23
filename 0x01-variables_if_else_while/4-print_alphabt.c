#include <stdio.h>

/**
*main - entry point to the program
*
*Description: This program prints the lowercase and uppercase alphabet,
*excluding the letters 'q' and 'e', followed by a new line character. 
*
*Return: always 0 (success)
*/

int main(void)
{
const char *letter = "abcdfghijklmnoprstuvwxyz\n";
int i = 0;
while (letter[i] != '\0')
{
putchar(letter[i]);
i++;
}
return (0);
}
