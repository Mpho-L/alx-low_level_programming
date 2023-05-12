#include "main.h"

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; argv[0][i] != '\0'; i++)
{
_putchar(argv[0][i]);
}
_putchar('\n');
return (0);
}
