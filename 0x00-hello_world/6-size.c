#include <stdio.h>

/**
 * main -entry point
 *The code below uses the sizeof operator to determine
 *the size in bytes of various types (char, int, long int, long long int and float)
 *on the computer it is compiled and run on. 
 It then uses printf() to output the size of each type to the console.
 *Return: Always 0 (Success)
*/

int main(void)
{
printf("Size of char: %zu bytes\n", sizeof(char));
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of long int: %zu bytes\n", sizeof(long));
printf("Size of long long int: %zu bytes\n", sizeof(long long));
printf("Size of float: %zu bytes\n", sizeof(float));

return (0);
}
