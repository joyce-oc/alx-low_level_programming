#include "main.h"

/**
 * _palindrome_helper - Helper function to check if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the current comparison.
 * @end: The ending index of the current comparison.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int _palindrome_helper(char *s, int start, int end)
{
    if (start >= end)
    {
        return 1; // Base case: entire string checked, it's a palindrome
    }
    if (s[start] != s[end])
    {
        return 0; // Characters don't match, not a palindrome
    }
    
    return _palindrome_helper(s, start + 1, end - 1); // Check next characters
}

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);
    return _palindrome_helper(s, 0, len - 1);
}
