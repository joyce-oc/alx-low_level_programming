#include "main.h"
#include <stdio.h>

/**
 * print_sum_multiples - Computes and prints the sum of multiples of 3 or 5
 * below 1024 (excluded)
 */
void print_sum_multiples(void)
{
    int i, sum = 0;

    for (i = 0; i < 1024; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);
}
