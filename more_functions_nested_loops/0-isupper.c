#include "main.h"
/**
 * _isupper - check the code
 *
 * Description: checks for uppercase character
 * @c: character to check
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
