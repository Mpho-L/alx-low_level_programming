#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - the program adds a new node at the end of a linked list
 * @head: A double pointer to the head of the linked list
 * @str: The string to be stored in the new node
 *
 * Return: A pointer to the newly created node
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
char *str_copy = strdup(str);
new_node->str = str_copy;
new_node->len = strlen(str);
new_node->next = NULL;
    
if (str == NULL)
return (NULL);

if (new_node == NULL)
return (NULL);

if (str_copy == NULL)
{
free(new_node);
return (NULL);
}

if (*head == NULL)
{
*head = new_node;
}
else
{
list_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
}
return (new_node);
}
