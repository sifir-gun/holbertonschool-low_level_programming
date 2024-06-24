#include "main.h"
/**
 * print_line - check the code
 *
 * Description: draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
