#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * sqrt_helper - helps to find the natural square root of a number
 * @n: the number to calculate the square root for
 * @i: the current number being tested as the square root
 *
 * Return: the natural square root of n, or -1 if n does not have one
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 0));
}
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_helper(n, i + 1));
}
