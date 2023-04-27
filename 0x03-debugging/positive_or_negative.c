#include <stdio.h>

/**
 * positive_negative -positive_or_negative  entry of the program
 * Description: The program prints if integer is positive or negative
 * Return: always 0 (success)
*/

void positive_or_negative(int i)
{
int i = -2;
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else if (i == 0)
{
printf("%d is 0\n", i);
}
return (0);
}
