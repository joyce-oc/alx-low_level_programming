#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * multiply - Multiply two numbers
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The result of the multiplication
 */
int multiply(int num1, int num2)
{
    return num1 * num2;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int result = multiply(num1, num2);

    printf("%d\n", result);

    return 0;
}
