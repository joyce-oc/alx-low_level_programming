#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to a pointer that needs to be set
 * @to: Pointer to the value to set @s to
 */
void set_string(char **s, char *to)
{
    *s = to;
}
