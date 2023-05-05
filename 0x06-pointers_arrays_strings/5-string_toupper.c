#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: The string to modify
 *
 * Return: The modified string
 */
char *string_toupper(char *s)
{
char *ptr = s;
while (*ptr)
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr -= 32;
}
ptr++;
}
return (s);
}
