#include "main.h"
/**
 * rev_string: reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s + _strlen(s) - 1;
	char temp;

	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	} 
}
