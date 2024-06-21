#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			k = i * j;
			if (k < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('0' + k / 10);
			}
			_putchar('0' + k % 10);
		}
		_putchar('\n');
	}
}
