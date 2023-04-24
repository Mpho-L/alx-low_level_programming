#include <stdio.h>

/**
 *main - entry point of the program
 *
 *Description: The program prints a quote by Dora Korpar to the standard
 *output.
 *  
 * return: is 1
*/
int main(void)
{
char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int i = 0;
while (quote[i] != '\0')
{
putchar(quote[i]);
putchar('\n')
i++;
}
return (1);
}
