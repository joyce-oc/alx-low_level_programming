#include <stdio.h>
#include "main.h"

/**
 * print_arguments - Print all command-line arguments, one per line
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 */
void print_arguments(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++){
printf("%s\n", argv[i]);
}
}

int main(int argc, char *argv[])
{
print_arguments(argc, argv);
return 0;
}
