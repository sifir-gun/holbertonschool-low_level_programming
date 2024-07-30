#include "lists.h"


/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the list_t list to print.
 *
 * Return: The number of nodes in the list.
 */

 size_t print_list(const list_t *h)
 {
	size_t nodes = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", tmp->len, tmp->str);
		}		
			nodes++;
			tmp = tmp->next;
	}
	return (nodes);
 }
