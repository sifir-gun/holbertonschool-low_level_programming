#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * 
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int started = 0;

    while (*s)
    {
        if (*s == '-')
        {
            if (started)
                break;
            sign = -sign;
        }
        else if (*s == '+')
        {
            if (started)
                break;
        }
        else if (*s >= '0' && *s <= '9')
        {
            if (result > (2147483647 - (*s - '0')) / 10)
            {
                if (sign == 1)
                    return 2147483647;
                else
                    return -2147483648;
            }
            started = 1;
            result = result * 10 + (*s - '0');
        }
        else if (started)
        {
            break;
        }
        s++;
    }
    return (result * sign);
}
