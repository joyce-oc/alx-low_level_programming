#include "main.h"

/**
 * is_prime - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(long n)
{
    if (n <= 1)
        return (0);
    if (n <= 3)
        return (1);
    if (n % 2 == 0 || n % 3 == 0)
        return (0);
    
    for (long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return (0);
    }
    return (1);
}

/**
 * largest_prime_factor - Finds and prints the largest prime factor of a number
 * @n: The number to find the largest prime factor for
 */
void largest_prime_factor(long n)
{
    long largest = 0;

    for (long i = 2; i * i <= n; i++)
    {
        if (n % i == 0 && is_prime(i))
            largest = i;
        while (n % i == 0)
            n /= i;
    }

    if (n > largest)
        largest = n;

    _putchar(largest + '0');
    _putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    largest_prime_factor(612852475143);
    return (0);
}
