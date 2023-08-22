#include "main.h"
#include "stdio.h"

/**
 * _strlen - Computes the length of a string.
 * @s: Pointer to the string.
 * Return: The length of the string.
 * rev_string - Reverses a string.
 */

void rev_string(char *s)
{
    int length = _strlen(s);
    char temp;
    
    for (int i = 0; i < length / 2; i++)
    {
        temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
}
