#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - Cherche un entier dans un tableau
 * @array: le tableau d'entiers
 * @size: le nombre d'éléments dans le tableau
 * @cmp: un pointeur vers la fonction de comparaison
 *
 * Return:index du 1er élément pour lequel la fonction cmp ne retourne pas 0
 *         -1 si aucun élément ne correspond ou si size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
