#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * is_positive_number - Check if a string represents a positive number
 * @str: The string to check
 *
 * Return: 1 if it's a positive number, 0 otherwise
 */
int is_positive_number(const char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

/**
 * add_positive_numbers - Add positive numbers passed as arguments
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: The result of the addition
 */
int add_positive_numbers(int argc, char *argv[])
{
    int sum = 0;
    int i;

    if (argc == 1)
    {
        printf("0\n");
        return 0;
    }

    for (i = 1; i < argc; i++)
    {
        if (is_positive_number(argv[i]))
        {
            int number = atoi(argv[i]);
            if (number > 0)
                sum += number;
        }
        else
        {
            printf("Error\n");
            return 1;
        }
    }

    printf("%d\n", sum);
    return sum;
}

int main(int argc, char *argv[])
{
    return add_positive_numbers(argc, argv);
}

