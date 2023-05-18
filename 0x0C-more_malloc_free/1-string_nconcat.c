#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - the program concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * Return: Pointer to the newly allocated concatenated string,
 *         or NULL if allocation fails.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_len, s2_len, concat_len = 0;
char *concat_str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

s1_len = strlen(s1);
s2_len = strlen(s2);

if (n >= s2_len)
n = s2_len;

concat_len = s1_len + n;

concat_str = malloc(sizeof(char) * (concat_len + 1));

if (concat_str == NULL)
return (NULL);

strcpy(concat_str, s1);

strncat(concat_str, s2, n);

return (concat_str);
}
