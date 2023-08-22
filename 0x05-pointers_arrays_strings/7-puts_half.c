#include "main.h"

/**
 * _strlen - Computes the length of a string.
 * @s: Pointer to the string.
 * 
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int length = 0;
    
    while (*s != '\0')
    {
        length++;
        s++;
    }
    
    return length;
}

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
    int length = _strlen(str);
    int start_idx;
    
    if (length % 2 == 0)
    {
        start_idx = length / 2;
    }
    else
    {
        start_idx = (length - 1) / 2;
    }
    
    while (str[start_idx] != '\0')
    {
        _putchar(str[start_idx]);
        start_idx++;
    }
    
    _putchar('\n');
}
