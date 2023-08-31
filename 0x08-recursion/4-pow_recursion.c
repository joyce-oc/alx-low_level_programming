#include "main.h"

/**
 * _pow_recursion - Calculate the value of x raised to the power of y.
 * @x: The base value.
 * @y: The exponent value.
 *
 * Return: The result of x^y, or -1 for an error if y is negative.
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return -1; // Return -1 for error if y is negative
    }
    else if (y == 0)
    {
        return 1; // Any number raised to the power of 0 is 1
    }
    else
    {
        return x * _pow_recursion(x, y - 1); // Recursive case: x^y = x * x^(y-1)
    }
}
