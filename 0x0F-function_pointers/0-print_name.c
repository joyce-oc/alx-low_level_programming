#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to be printed
 * @f: A function pointer to a function that takes a char pointer
 */
void print_name(char *name, void (*f)(char *)) {
    if (name != NULL && f != NULL) {
        f(name);
    }
}
