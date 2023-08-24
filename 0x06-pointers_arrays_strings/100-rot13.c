#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string.
 *
 * Return: Pointer to the modified string @str.
 */
char *rot13(char *str)
{
    char *rot_in = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *rot_out = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; rot_in[j] != '\0'; j++)
        {
            if (str[i] == rot_in[j])
            {
                str[i] = rot_out[j];
                break;
            }
        }
    }

    return str;
}
