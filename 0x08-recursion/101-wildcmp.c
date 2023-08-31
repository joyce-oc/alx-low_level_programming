#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 0 if strings are equal, positive if s1 > s2, negative if s1 < s2.
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    
    return (*s1 - *s2);
}

/**
 * _wildcmp_helper - Helper function to compare two strings with wildcards.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 1 if strings are equal, 0 otherwise.
 */
int _wildcmp_helper(char *s1, char *s2)
{
    if (*s2 == '*')
    {
        return (_wildcmp_helper(s1, s2 + 1) || _wildcmp_helper(s1 + 1, s2));
    }
    else if (*s1 != '\0' && *s2 != '\0')
    {
        if (*s1 == *s2)
        {
            return _wildcmp_helper(s1 + 1, s2 + 1);
        }
        else
        {
            return 0;
        }
    }
    
    return (*s1 == *s2); // Return 1 if both strings are at '\0'
}

/**
 * wildcmp - Compare two strings with wildcards.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 1 if strings are equal, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '*')
    {
        return _wildcmp_helper(s1, s2);
    }
    else
    {
        return (_strcmp(s1, s2) == 0);
    }
}
