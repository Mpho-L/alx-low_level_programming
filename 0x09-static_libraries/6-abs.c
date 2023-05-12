#!/bin/bash
#include "main.h"

/**
 * _abs - the program calculate the absolute value of an integer
 * @n: integer to calculate absolute value of
 *
 * Return: absolute value of n
*/
int _abs(int n)
{
if (n < 0)
return (-n);
else
return (n);
}
