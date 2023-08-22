#include "main.h"
#include "stdio.h"

/**
 * _strlen - Computes the length of a string.
 * @s: Pointer to the string.
 * Return: The length of the string.
 * print_rev - Prints a string in reverse followed by a new line
 */

void print_rev(char *s)
{
   int c = 0;
   while (s[c]!= '\0')
   {
   c++;
   }
   for (c -= 1; c >= 0; c--)
   {
   _putchar(s[c]);
   }
    _putchar('\n');
}
