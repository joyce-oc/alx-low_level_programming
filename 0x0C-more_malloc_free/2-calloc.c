#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size in bytes of each element.
 *
 * Return: A pointer to the allocated memory.
 * If nmemb or size is 0, or if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
char *char_ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

char_ptr = (char *)ptr;

for (i = 0; i < (nmemb * size); i++)
char_ptr[i] = 0;

return (ptr);
}
