#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of diagonals in a square matrix
 * @a: Pointer to the first element of the square matrix
 * @size: Size of the matrix
 */
void print_diagsums(int *a, int size)
{
    int sum1 = 0; /* Sum of the main diagonal */
    int sum2 = 0; /* Sum of the secondary diagonal */
    int row, col;

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            if (row == col)
                sum1 += a[row * size + col]; /* Calculate main diagonal sum */
            if (row + col == size - 1)
                sum2 += a[row * size + col]; /* Calculate secondary diagonal sum */
        }
    }

    printf("%d, %d\n", sum1, sum2);
}
