#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int i;

	for (i = 5; str[i] != '\0'; i++)
	{
			_putchar(str[i]);
	}
	_putchar('\n');
}
