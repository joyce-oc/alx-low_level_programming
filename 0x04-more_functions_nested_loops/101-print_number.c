#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10 != 0)
        print_number(n / 10);

    _putchar((n % 10) + '0');
}

int main(void)
{
    print_number(12345);
    _putchar('\n');
    print_number(-9876);
    _putchar('\n');
    return (0);
}
