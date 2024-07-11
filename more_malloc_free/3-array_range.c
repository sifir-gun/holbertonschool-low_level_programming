#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Creates an array of integers.
 * @min: The minimum value (included).
 * @max: The maximum value (included).
 *
 * Return: Pointer to the newly created array.
 * If min > max, returns NULL.
 * If malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int i, size;
	int *ptr;


	if (min > max)
		return (NULL);
	size = max - min + 1;

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min + i;

	return (ptr);
}
