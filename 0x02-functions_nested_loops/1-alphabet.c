#include "main.h"
#include <unistd.h>

/**
*print_alphabet - entry point of the program
*
*The program defines a function named print_alphabet that prints the lowercase
*alphabet to the console, followed by a newline character.
*The function uses the _putchar function to output each character of the
*alphabet one at a time.
*
*/

void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
