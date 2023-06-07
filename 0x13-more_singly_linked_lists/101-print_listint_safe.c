#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint_safe - the program prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current = head, *loop_start = NULL;

while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;

if (current->next >= current)
{
loop_start = current->next;
break;
}
current = current->next;
}
if (loop_start != NULL)
{
printf("-> [%p] %d\n", (void *)loop_start, loop_start->n);
exit(98);
}
return (coun)t;
}
