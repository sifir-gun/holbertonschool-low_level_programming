#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
