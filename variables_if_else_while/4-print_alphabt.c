#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase except for q and e
 * Return: 0 on success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
