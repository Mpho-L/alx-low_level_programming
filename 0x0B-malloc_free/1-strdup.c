#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * _strdup - the program duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL on failure
 */

char *_strdup(char *str)
{
char *duplicate;
unsigned int length = 0;
unsigned int i;

if (str == NULL)
return (NULL);

while (str[length])
length++;

duplicate = malloc(sizeof(char) * (length + 1));
if (duplicate == NULL)
return (NULL);

for (i = 0; i < length; i++)
duplicate[i] = str[i];

duplicate[length] = '\0';

return (duplicate);
}
