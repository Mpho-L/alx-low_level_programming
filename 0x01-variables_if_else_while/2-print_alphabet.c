#include <stdio.h>

/**
* main - Entry point for the program

*This program that declares a constant string letter
*and then uses a while loop to print each character
*in the string to the console using the putchar() function.
*The string letter is initialized to the lowercase alphabet, from 'a' to 'z'.
*The const keyword is used to indicate that the contents of
*letter are read-only and cannot be modified during runtime. The while
*loop iterates over the characters in the string using an index variable i.
*The loop continues as long as the current character is not the null
*character '\0'.Inside the loop, the putchar() function is used
*to print each character to the console. Finally, the program
*returns the value 0 to indicate that it executed successfully.
*/

int main(void)
{
const char *letter = "abcdefghijklmnopqrstuvwxyz ";
int i = 0;
while (letter[i] != '\0')
{
putchar(letter[i]);
i++;
}
return (0);
}
