#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - th eprogram creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *new_name, *new_owner;
int name_length, owner_length;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
name_len = strlen(name) + 1;
new_name = malloc(sizeof(char) * name_length);
if (new_name == NULL)
{
free(new_dog);
return (NULL);
}
owner_len = strlen(owner) + 1;
new_owner = malloc(sizeof(char) * owner_length);
if (new_owner == NULL)
{
free(new_name);
free(new_dog);
return (NULL);
}
strncpy(new_name, name, name_length);
strncpy(new_owner, owner, owner_length);
init_dog(new_dog, new_name, age, new_owner);

return (new_dog);
}
