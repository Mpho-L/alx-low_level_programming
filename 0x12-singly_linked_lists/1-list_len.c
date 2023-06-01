#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * list_len - the program counts the number of nodes in a linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
