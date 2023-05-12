#!/bin/bash
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
int i, sign, value;

i = 0;
sign = 1;
value = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
{
sign = -sign;
}
else if (s[i] >= '0' && s[i] <= '9')
{
value = value * 10 + (s[i] - '0');
}
else if (value > 0)
{
break;
}
i++;
}
return (sign *value);
}
