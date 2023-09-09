#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program 
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: If ac is 0 or av is NULL
 * Otherwise, returns a pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
int total_length = 0;
int i, j, k;
char *concatenated;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
total_length++;
total_length++; /* Add 1 for the newline character */
}

concatenated = malloc(sizeof(char) * (total_length + 1));

if (concatenated == NULL)
return (NULL);

k = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
concatenated[k] = av[i][j];
k++;
}
concatenated[k] = '\n'; /* Add newline character */
k++;
}
concatenated[k] = '\0'; /* Null-terminate the string */

return (concatenated);
}
