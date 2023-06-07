#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint_safe - the program frees a listint_t linked list safely.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current, *next;

if (h == NULL || *h == NULL)
return (0);

current = *h;

while (current != NULL)
{
next = current->next;
free(current);
count++;

if (next >= current)
break;

current = next;
}
*h = NULL;

return (count);
}
