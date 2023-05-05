#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: input string.
 * Return: encoded string.
 */
char *rot13(char *str)
{
int i, j;
char *s = str;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == a[j])
{
s[i] = n[j];
break;
}
}
}
return (s);
}
