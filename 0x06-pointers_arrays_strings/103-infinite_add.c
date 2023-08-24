#include "main.h"

/**
 * reverse_string - Reverses a string.
 * @str: The string to reverse.
 * @length: The length of the string.
 */
void reverse_string(char *str, int length)
{
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end)
    {
        temp = *(str + start);
        *(str + start) = *(str + end);
        *(str + end) = temp;

        start++;
        end--;
    }
}

/**
 * infinite_add - Adds two positive numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result, or 0 if result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len_n1 = 0;
    int len_n2 = 0;
    int carry = 0;
    int sum = 0;
    int max_length;

    while (n1[len_n1] != '\0')
        len_n1++;
    while (n2[len_n2] != '\0')
        len_n2++;

    max_length = (len_n1 > len_n2) ? len_n1 : len_n2;

    if (max_length >= size_r - 1)
        return 0;

    r[max_length + 1] = '\0';
    len_n1--;
    len_n2--;

    while (len_n1 >= 0 || len_n2 >= 0)
    {
        sum = carry + ((len_n1 >= 0) ? (n1[len_n1] - '0') : 0) + ((len_n2 >= 0) ? (n2[len_n2] - '0') : 0);
        carry = sum / 10;
        r[max_length] = (sum % 10) + '0';

        len_n1--;
        len_n2--;
        max_length--;
    }

    if (carry)
        r[max_length] = carry + '0';
    else
        max_length++;

    reverse_string(r, size_r - 1);
    return r + max_length;
}

