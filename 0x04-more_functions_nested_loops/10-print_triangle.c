#include "main.h"

void print_triangle(int size)
{
    int i, j; /* Declare variables at the beginning of the block */

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j <= i; j++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}
