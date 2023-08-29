#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string
 * @c: Character to locate
 *
 * Return: Pointer to the first occurrence of character @c in string @s,
 *         or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
   int i;
for (i=0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s+1);
}
    return (NULL);
}
