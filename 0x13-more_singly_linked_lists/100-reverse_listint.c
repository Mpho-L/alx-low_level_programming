#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - the program reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next = NULL;

if (head == NULL || *head == NULL)
return (NULL);

while (*head != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;

return (*head);
}