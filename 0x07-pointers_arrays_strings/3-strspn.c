#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Pointer to the string of accepted characters
 *
 * Return: Number of bytes in the initial segment of @s consisting only of
 *         bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int found;

    while (*s)
    {
        found = 0;
        for (int i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
            {
                found = 1;
                break;
            }
        }

        if (found)
            count++;
        else
            break;

        s++;
    }

    return count;
}
