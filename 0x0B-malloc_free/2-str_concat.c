#include "main.h"
#include <stdlib.h>

/**
 * str_concat - the program Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: On success, a pointer to the concatenated string.
 * On failure, NULL is returned.
 */

char *str_concat(char *s1, char *s2)
{
int len1 = 0;
int len2 = 0;
int i, j;
char *concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

if (s1 == NULL)
{
s1 = "";
}    
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
if (concatenated == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
concatenated[i] = s1[i];
}
for (j = 0; j < len2; j++)
{
concatenated[i + j] = s2[j];

concatenated[i + j] = '\0';
}
return (concatenated);
}

