#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * strtow - the program splits a string into words.
 * @str: The string to be split.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */

char **strtow(char *str)
{
char **words;
int i, j, k;
int word_count = 0;
int word_length = 0;
int str_length = 0;

if (str == NULL || *str == '\0')
return (NULL);

str_length = strlen(str);
for (i = 0; i < str_length; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
word_count++;
}
words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
return (NULL);

j = 0;
for (i = 0; i < str_length; i++)
{
if (str[i] != ' ')
{
word_length++;
if (str[i + 1] == ' ' || str[i + 1] == '\0')
{
words[j] = malloc(sizeof(char) * (word_length + 1));
if (words[j] == NULL)
{
for (k = 0; k < j; k++)
free(words[k]);
free(words);
return (NULL);
}
strncpy(words[j], str + (i - word_length + 1), word_length);
words[j][word_length] = '\0';
word_length = 0;
j++;
}
}
}
words[word_count] = NULL;

return (words);
}
