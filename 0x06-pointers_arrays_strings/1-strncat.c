#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to append.
 * @n: The maximum number of bytes to append from src.
 *
 * Return: Pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest;
    int src_length = 0;

    /* Calculate the length of src */
    while (src[src_length] != '\0')
    {
        src_length++;
    }

    /* Move the pointer to the end of the destination string */
    while (*ptr != '\0')
    {
        ptr++;
    }

    /* Append at most n characters from src to dest */
    while (*src != '\0' && n > 0)
    {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }

    /* Add a null terminator to the end of the concatenated string */
    *ptr = '\0';

    return dest;
}
