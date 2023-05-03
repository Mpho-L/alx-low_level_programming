#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
int i = 0, sign = 1, res = 0;

while (s[i] == ' ')
{
i++;
}
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
res = res * 10 + (s[i] - '0');
i++;
}
return (sign *res);
}
