#include "main.h"
/**
 * print_numbers - check the code
 *
 * Description: prints the numbers, from 0 to 9
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
