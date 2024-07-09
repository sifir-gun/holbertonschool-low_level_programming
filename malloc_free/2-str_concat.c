#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated space in memory containing the
 * concatenated string, or NULL if the function fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int i, j = 0, len1 = 0, len2 = 0;

    /* If s1 or s2 are NULL, treat them as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

    /* Allocate memory for the concatenated string */
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);

    /* Copy s1 to the concatenated string */
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

    /* Copy s2 to the concatenated string */
	for (j = 0; j < len2; j++)
		concat_str[i + j] = s2[j];

    /* Add the null terminator */
	concat_str[i + j] = '\0';

	return (concat_str);
}
