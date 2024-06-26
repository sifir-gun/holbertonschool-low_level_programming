#include "main.h"
/**
 * print_rev - imprime une chaîne de caractères à l'envers, suivie d'une nouvelle ligne
 * @s: chaîne de caractères à imprimer
 */
void print_rev(char *s)
{
    int len = 0;
    int i;

    while (s[len] != '\0')
    {
        len++;
    }

    for (i = len - 1; i >= 0; i--)
    {
        _putchar(s[i]);
    }

    _putchar('\n');
}
