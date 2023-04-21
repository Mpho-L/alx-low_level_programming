#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 *
 * This function generates a random number and prints whether it is positive,
 * negative, or zero. It uses the srand() and rand() functions from the stdlib.h
 * library to generate the random number, and then uses if-else statements to
 * determine whether it is positive, negative, or zero. The result is printed to
 * the console using printf().
 *
 * Return: Always 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
