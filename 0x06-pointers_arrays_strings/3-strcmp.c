#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: Negative if s1 is less than s2, 0 if equal, positive if s1 is greater.
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0;

    /* Compare characters until a mismatch or both strings end */
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }

    /* Return the difference of ASCII values at the mismatch or end of strings */
    return s1[i] - s2[i];
}
