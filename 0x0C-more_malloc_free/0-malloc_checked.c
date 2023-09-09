#include <stdlib.h>
#include <stdio.h> 

/**
 * malloc_checked - Allocates memory using malloc and checks for success.
 * @b: The number of bytes to allocate.
 *
 * Return: If malloc is successful, returns a pointer to the allocated memory.
 * If malloc fails, the function terminates the program with status 98.
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
    {
        perror("malloc failed");
        exit(98);
    }

    return ptr;
}
