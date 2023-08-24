#include "main.h"
#include "stdio.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to append.
 *
 * Return: Pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    /* Move the pointer to the end of the destination string */
    while (*ptr != '\0')
    {
        ptr++;
    }

    /* Append characters from src to dest */
    while (*src != '\0')
    {
        *ptr = *src;
        ptr++;
        src++;
    }

    /* Add a null terminator to the end of the concatenated string */
    *ptr = '\0';

    return dest;
}

