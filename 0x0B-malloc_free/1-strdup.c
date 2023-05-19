#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - the program returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 * Return: On success, a pointer to the duplicated string.
 *         On failure or if str is NULL, NULL is returned.
 */

char *_strdup(char *str)
{
int i;
char *copy;
int length = 0;
copy = malloc(sizeof(char) * (length + 1));

if (str == NULL)
{
return (NULL);
}
while (str[length] != '\0')
{
length++;
}
if (copy == NULL)
{
return (NULL);
}
for (i = 0; i <= length; i++)
{
copy[i] = str[i];
}
return (copy);
}
