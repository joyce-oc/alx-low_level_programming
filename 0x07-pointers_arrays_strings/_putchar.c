#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to write
 *
 * Return: On success, returns the number of characters written.
 * On error, returns -1 and sets errno.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
