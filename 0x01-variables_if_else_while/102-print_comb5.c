#include <stdio.h>

/**
 *main - entry to the program
 *
 *Description: This program prints all possible two two-digit numbers separated
 *by commas.
 *
 *Return: always 0 (success)
*/
int main(void) {
int i, j;

for (i = 0; i < 100; i++) {
for (j = i; j < 100; j++) {
if (i != j) {
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i != 99 || j != 98) {
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return 0;
}
