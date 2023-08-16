#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - Prints the first 50 Fibonacci numbers
 */
void print_fibonacci(void)
{
    long int prev = 0, current = 1, next, count;

    for (count = 0; count < 50; count++)
    {
        if (count != 0)
        {
            printf(", ");
        }

        if (count < 2)
        {
            next = count + 1;
        }
        else
        {
            next = prev + current;
            prev = current;
            current = next;
        }

        printf("%ld", next);
    }

    printf("\n");
}
