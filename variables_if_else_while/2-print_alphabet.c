#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase
 * Return: 0 on success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
