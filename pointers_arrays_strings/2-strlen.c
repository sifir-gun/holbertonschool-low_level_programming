#include "main.h"
/**
 * _strlen - Count the number of characters in the sting
 * description: returns the length of a string
 * @s: - pointer to a string
 * return - taille
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
