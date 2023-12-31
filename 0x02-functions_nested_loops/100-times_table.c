#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table
 * @n: The number for which the times table is generated
 */
void print_times_table(int n)
{
    int row, column, product;

    if (n < 0 || n > 15)
    {
        return;
    }

    for (row = 0; row <= n; row++)
    {
        for (column = 0; column <= n; column++)
        {
            product = row * column;

            if (column == 0)
            {
                printf("%d", product);
            }
            else
            {
                printf(",   %d", product);
            }
        }

        printf("\n");
    }
}
