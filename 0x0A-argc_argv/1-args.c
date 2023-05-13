#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments received
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments
 *
 * Return: Always 0
 */
int main(int argc, char **arg2 __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
