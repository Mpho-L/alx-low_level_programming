#include <stdio.h>
#include "lists.h"

/**
 * print_before_main - Function executed before the main function
 */
void print_before_main(void) __attribute__((constructor));

void print_before_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
