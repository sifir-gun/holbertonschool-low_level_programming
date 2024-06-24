#include "main.h"
/**
 * _isdigit - check the code
 *
 * Description: checks for a digit (0 through 9)
 * @c: character to check
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
