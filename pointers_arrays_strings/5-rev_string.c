#include "main.h"
/**
 * rev_string - Inverse une chaîne de caractères
 * @s: Chaîne de caractères à inverser
 *
 * Description: Cette fonction prend une chaîne de caractères en entrée
 * et inverse l'ordre des caractères dans cette chaîne.
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s + _strlen(s) - 1;
	char temp;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
/**
 * _strlen - Count the number of characters in the sting
 * description: returns the length of a string
 * @s: - pointer to a string
 *
 * Return: taille
 */
int _strlen(char *s)
{
	int taille = 0;

	while (*s != '\0')
	{
	taille++;
	s++;
	}
	return (taille);
}
