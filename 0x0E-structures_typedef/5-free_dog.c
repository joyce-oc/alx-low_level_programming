#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog instance
 * @d: Pointer to the dog struct
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->name);  
        free(d->owner);  
        free(d);        
    }
}
