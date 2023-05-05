#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 *
 * @s: Pointer to the string to capitalize.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
int i, cap = 1;
char separators[] = " \t\n,;.!?\"(){}";
for (i = 0; s[i] != '\0'; i++)
{
if (cap && s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 'a' - 'A';
}
cap = 0;
if (strchr(separators, s[i]) != NULL)
{
cap = 1;
}
}
return (s);
}
