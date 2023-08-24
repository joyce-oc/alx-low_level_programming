#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: Pointer to the modified string @str.
 */
char *cap_string(char *str)
{
    int i = 0;
    int capitalize_next = 1; /* Flag to indicate next character should be capitalized */

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (capitalize_next)
            {
                str[i] -= 32; /* Convert lowercase to uppercase using ASCII offset */
                capitalize_next = 0;
            }
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            capitalize_next = 0;
        }
        else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
                 str[i] == ',' || str[i] == ';' || str[i] == '.' ||
                 str[i] == '!' || str[i] == '?' || str[i] == '"' ||
                 str[i] == '(' || str[i] == ')' || str[i] == '{' ||
                 str[i] == '}')
        {
            capitalize_next = 1; /* Set flag to capitalize next word */
        }

        i++;
    }

    return str;
}
