#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * get_endianness - the program checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
unsigned int num = 1;
unsigned char *byte_ptr = (unsigned char *)&num;

return ((byte_ptr[0] == 1) ? 1 : 0);
}
