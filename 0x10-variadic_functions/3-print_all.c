#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything based on the provided format
 * @format: The format string specifying the types of arguments
 * Return: None
 */

void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str, *nil = "(nil)";

if (format == NULL)
{
printf("\n");
return;
}
va_start(args, format);

while (format[i])
{
if (i > 0)
printf(", ");

switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
printf("%s", (str != NULL) ? str : nil);
break;
}
i++;
}
printf("\n");
va_end(args);
}
