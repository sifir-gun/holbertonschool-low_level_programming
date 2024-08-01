#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int bit_found = 0;
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (mask = 1UL << (sizeof(n) * 8 - 1); mask > 0; mask >>= 1)
	{
		if (n & mask)
		{
			_putchar('1');
			bit_found = 1;
		}
		else if (bit_found)
		{
			_putchar('0');
		}
	}
}
