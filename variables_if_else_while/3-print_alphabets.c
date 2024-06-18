#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and then in uppercase
 * Return: 0 on success
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
