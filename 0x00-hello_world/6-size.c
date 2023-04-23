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
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long));
printf("Size of a float: %zu byte(s)\n", sizeof(float));

return (0);
}
