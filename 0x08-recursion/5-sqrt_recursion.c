#include "main.h"

/**
 * _sqrt_helper - Helper function to calculate the square root using recursion.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if no natural square root exists.
 */
int _sqrt_helper(int n, int guess)
{
    if (guess * guess == n)
    {
        return guess; // Found the exact square root
    }
    else if (guess * guess > n)
    {
        return -1; // No natural square root exists
    }
    else
    {
        return _sqrt_helper(n, guess + 1); // Try the next guess
    }
}

/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of n, or -1 if no natural square root exists.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return -1; // Return -1 for negative numbers
    }
    else
    {
        return _sqrt_helper(n, 0); // Start the search with guess = 0
    }
}
