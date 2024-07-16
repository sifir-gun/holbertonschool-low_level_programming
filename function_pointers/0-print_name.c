#include "function_pointers.h"

/**
 * print_name - imprime un nom en utilisant un pointeur de fonction
 * @name: le nom à imprimer
 * @f: pointeur vers la fonction à utiliser pour imprimer le nom
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
