#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
int i, j;
char leet[] = "43071";
char letters[] = "aAeEoOtTlL";
for (i = 0; s[i]; i++)
{
for (j = 0; letters[j]; j++)
{
if (s[i] == letters[j])
{
s[i] = leet[j / 2];
}
}
}
return (s);
}
