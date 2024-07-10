#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatène deux chaînes de caractères.
 * @s1: Première chaîne de caractères.
 * @s2: Deuxième chaîne de caractères.
 * @n: Nombre de caractères de s2 à concaténer à s1.
 *
 * Return: Pointeur vers un espace mémoire nouvellement alloué contenant s1,
 * suivi des premiers n caractères de s2, et terminé par un caractère nul.
 * Si la fonction échoue, retourne NULL.
 * Si n est supérieur ou = à la longueur de s2, utilise la totalité de s2.
 * Si NULL est passé, le traite comme une chaîne vide.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
