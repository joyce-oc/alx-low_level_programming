#include <stdio.h>

/**
 * pre_main_message - Function to print the message before main.
 */
void pre_main_message(void) __attribute__((constructor));

/**
 * pre_main_message - Function to print the message before main.
 */
void pre_main_message(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main(void)
{
    /* Your main function code goes here */
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}

