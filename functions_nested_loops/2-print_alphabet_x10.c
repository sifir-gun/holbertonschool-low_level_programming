#include "main.h"

/**
 * print_alphabet_x10 - check the code
 * Description: prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
/* Fichier 1-alphabet.c ou un autre fichier source approprié */
void print_alphabet_x10(void)
{
char c[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
int j;

for (j = 0; j < 10; j++)
{
for (i = 0; i < 26; i++)
{
_putchar(c[i]);
}
_putchar('\n');
}
}
