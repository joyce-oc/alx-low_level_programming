#include <stdio.h>
#include "main.h"

/**
 * count_arguments - Count and print the number of command-line arguments
 * @argc: The number of command-line arguments
 *
 * Return: 0
 */
int count_arguments(int argc)
{
    printf("%d\n", argc - 1); /* Subtract 1 to exclude the program name */
    return (0);
}

int main(int argc, char *argv[])
{
    count_arguments(argc);
    return (0);
}
