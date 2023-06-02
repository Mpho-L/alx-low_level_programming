#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * argstostr - the program concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */

char *argstostr(int ac, char **av)
{
char *concatenated;
int i, j;
int length = 0;
int total_length = 0;

if (ac == 0 || av == NULL)
return (NULL);

/* Calculate the total length of the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
length++;
total_length += length + 1; /* +1 for newline character */
length = 0;
}

concatenated = malloc(sizeof(char) * (total_length + 1));
if (concatenated == NULL)
return (NULL);

length = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
concatenated[length] = av[i][j];
length++;
}
concatenated[length] = '\n';
length++;
}
concatenated[length] = '\0';

return (concatenated);
}
