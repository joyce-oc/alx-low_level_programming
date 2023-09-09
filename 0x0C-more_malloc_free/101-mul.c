#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if a string represents a positive number.
 * @str: The string to check.
 *
 * Return: 1 if the string represents a positive number, 0 otherwise.
 */
int is_positive_number(char *str)
{
if (str == NULL || *str == '\0')
return 0;

while (*str)
{
if (*str < '0' || *str > '9')
return 0;
str++;
}

return 1;
}

/**
 * multiply - Multiply two positive numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication as a string.
 */
char *multiply(char *num1, char *num2)
{
int len1 = 0, len2 = 0, i, j, carry = 0;
int *result;
char *result_str;

while (num1[len1])
len1++;
while (num2[len2])
len2++;

result = malloc(sizeof(int) * (len1 + len2));
if (result == NULL)
{
printf("Error\n");
exit(98);
}

for (i = 0; i < len1 + len2; i++)
result[i] = 0;

for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
int product = (num1[i] - '0') * (num2[j] - '0');
int sum = product + result[i + j + 1] + carry;
result[i + j + 1] = sum % 10;
carry = sum / 10;
}
result[i + j + 1] += carry;
}

for (i = 0; i < len1 + len2 && result[i] == 0; i++)
;

if (i == len1 + len2)
return "0";

result_str = malloc(sizeof(char) * (len1 + len2 - i + 1));
if (result_str == NULL)
{
free(result);
printf("Error\n");
exit(98);
}

for (j = 0; i < len1 + len2; i++, j++)
result_str[j] = result[i] + '0';

result_str[j] = '\0';

free(result);
return result_str;
}

int main(int argc, char *argv[])
{
char *num1;
char *num2;
char *result;

if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
{
printf("Error\n");
return 98;
}

num1 = argv[1];
num2 = argv[2];
result = multiply(num1, num2);

printf("%s\n", result);
free(result);

return 0;
}

