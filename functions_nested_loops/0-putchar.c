#include <stdio.h>
/*
 * main - Entry point
 *
 * Description: Write a program that prints _putchar, followed by a new line.
 * Return: 0 on success
 */
int main(void)
{
char c[8] = "_putchar";
int i;

for (i = 0; i < 8; i++)
{
putchar(c[i]);
}
putchar('\n');
return (0);
}
