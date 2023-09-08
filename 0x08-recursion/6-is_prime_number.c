#include "main.h"

/**
 * _is_prime_helper - Helper function to check if a number is prime using recursion.
 * @n: The number to check for primality.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int _is_prime_helper(int n, int divisor)
{
    if (divisor <= 1)
    {
        return 1; // If divisor reaches 1, n is prime
    }
    if (n % divisor == 0)
    {
        return 0; // If n is divisible by divisor, n is not prime
    }
    
    return _is_prime_helper(n, divisor - 1); // Check with the next divisor
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check for primality.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    if (n <= 1)
    {
        return 0; // Negative numbers and 0, 1 are not prime
    }
    else
    {
        return _is_prime_helper(n, n - 1); // Start checking from n - 1
    }
}
