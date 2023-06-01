#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - the program adds a new node at the beginning of a linked list
 * @head: A double pointer to the head of the linked list
 * @str: The string to be stored in the new node
 *
 * Return: A pointer to the newly created node
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
char *str_copy = strdup(str);

new_node->str = str_copy;
new_node->len = strlen(str);
new_node->next = *head;

*head = new_node;

if (str == NULL)
return (NULL);


if (new_node == NULL)
return (NULL);

if (str_copy == NULL)
{
free(new_node);
return (NULL);
}
return (new_node);
}
