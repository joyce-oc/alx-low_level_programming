#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize the array elements with.
 * Return: If size is 0 or if memory allocation fails, returns NULL.
 * Otherwise
 */
char *create_array(unsigned int size, char c)
{
char *array;
if (size == 0)
return (NULL);

array = (char *)malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
{
unsigned int i;
for (i = 0; i < size; i++)
array[i] = c;
}
return (array);
}
