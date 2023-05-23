#include <stdio.h>
#include "dog.h"
#include "main.h"

/**
 * print_dog - the program prints the elements of a struct dog
 * @d: Pointer to the struct dog to print
 *
*/

void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %.1f00000\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
}
