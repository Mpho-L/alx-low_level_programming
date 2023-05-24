#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - The program prints a name using a provided function pointer.
 * @name: Pointer to a character array representing the name.
 * @f: Pointer to a function that takes a char* parameter and returns void.
 *
 * Description: This function prints a name by calling the function
 * pointed to by @f and passing the @name as an argument. The function
 * @f should handle the actual printing of the name.
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
