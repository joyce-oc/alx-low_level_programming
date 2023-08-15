#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and prints the last digit of the number
 *              along with a message based on its value.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n,last_digit;

    srand(time(NULL));
    n = rand() % 2001 - 1000;

    printf("Last digit of %d is %d and is ", n, n % 10);

    last_digit = n % 10;

    if (last_digit > 5) {
        printf("greater than 5\n");
    } else if (last_digit == 0) {
        printf("0\n");
    } else {
        printf("less than 6 and not 0\n");
    }

    return (0);
}
