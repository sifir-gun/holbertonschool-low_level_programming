#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to locate
 *
 * Return: a pointer to the first occurrence of the character c
 *         in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
	{
		return (s);
	}

	return ('\0');
}
