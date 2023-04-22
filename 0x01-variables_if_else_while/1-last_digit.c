#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - entry point for the program
*This program generates a random integer and prints a message
*indicating whether the last digit of the integer is greater than 5,
*equal to 0, or not equal to 0 and less than 6.
*Return: 0 on successful completion
*/

int main(void){

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 5){
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if (n == 0){
printf("Last digit of %d is %d and is 0\n", n, n % 10);
}
else if (n < 6 && n != 0){
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
return (0);
}
