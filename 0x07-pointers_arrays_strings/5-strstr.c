#include "main.h"

/**
 * _strstr - Locates a substring in a string
 * @haystack: Pointer to the string to search in
 * @needle: Pointer to the substring to search for
 *
 * Return: Pointer to the beginning of the located substring in @haystack,
 *         or 0 if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *start = haystack;
        char *substr = needle;

        while (*haystack && *substr && *haystack == *substr)
        {
            haystack++;
            substr++;
        }

        if (!*substr)
            return start;

        haystack = start + 1;
    }

    return 0;
}
