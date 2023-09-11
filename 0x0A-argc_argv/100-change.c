#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
    int cents;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    cents = atoi(argv[1]);
    minimum_coins(cents);
    return 0;
}

/**
 * minimum_coins - Calculate the minimum number of coins for change
 * @cents: The amount of money in cents
 *
 * Return: The minimum number of coins needed for change
 */
int minimum_coins(int cents)
{
    int coins = 0;

    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }

    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }
    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }
    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }
    while (cents >= 2)
    {
        cents -= 2;
        coins++;
    }
    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }

    printf("%d\n", coins);
    return coins;
}
