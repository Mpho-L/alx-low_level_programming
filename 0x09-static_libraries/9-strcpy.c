#!/bin/bash
#include "main.h"

/**
 * _strcpy - copies a string to a buffer
 * @dest: pointer to the buffer
 * @src: pointer to the string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;

while (*src != '\0')
{
*dest++ = *src++;
}
*dest = '\0';
return (dest_start);
}
