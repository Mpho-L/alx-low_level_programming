#!/bin/bash
#include "main.h"

/**
 * _memset - the program fills memory with a constant byte
 * @s: it is a pointer to the memory area to be filled
 * @b: it is the constant byte to fill the memory with
 * @n: it is a number of bytes to be filled starting from s
 *
 * Return: returns pointer to the filled memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
