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
int i, count = 0;
for (i = 0; i < argc; i++)
{
count++;
}
_putchar(count + '0');
_putchar('\n');
return (0);
}
