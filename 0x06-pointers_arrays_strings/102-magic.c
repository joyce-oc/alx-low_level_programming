#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4};
    int *p;

    p = &a[2]; /* p points to the third element of the array */

    /* Add this line to print a[2] = 98, followed by a new line */
    *(p + 2) = 98; /* Since p points to a[2], we can add 2 to access a[4] and assign it 98 */

    printf("a[2] = %d\n", a[2]);
    return (0);
}

