#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator-Exécute une fonction donnée sur chaque élément du tableau
 * @array: le tableau d'entiers
 * @size: la taille du tableau
 * @action: un pointeur vers la fonction à utiliser pour chaque élément
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
