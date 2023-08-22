#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 * 
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;
    
    // Handle leading whitespace
    while (s[i] == ' ')
        i++;
    
    // Handle sign
    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }
    
    // Convert digits to integer
    while (s[i] >= '0' && s[i] <= '9')
    {
        // Check for overflow
        if (result > (INT_MAX - (s[i] - '0')) / 10)
        {
            if (sign == -1)
                return INT_MIN;
            else
                return INT_MAX;
        }
        
        result = result * 10 + (s[i] - '0');
        i++;
    }
    
    return result * sign;
}
