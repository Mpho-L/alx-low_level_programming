#!/bin/bash
#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: 0 if s1 and s2 are equal, less than 0 if s1 is less than s2,
 * and greater than 0 if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
{
i++;
}
if (s1[i] == '\0' && s2[i] == '\0')
{
return (0);
}
else
{
return (s1[i] - s2[i]);
}
}
