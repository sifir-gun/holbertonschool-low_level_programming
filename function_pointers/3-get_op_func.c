#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as argument to the program.
 *
 * Return: A pointer to the function that corresponds to
 *         the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
		op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};


	return ((*s == ops[0].op[0] && s[1] == '\0') ? ops[0].f :
			(*s == ops[1].op[0] && s[1] == '\0') ? ops[1].f :
			(*s == ops[2].op[0] && s[1] == '\0') ? ops[2].f :
			(*s == ops[3].op[0] && s[1] == '\0') ? ops[3].f :
			(*s == ops[4].op[0] && s[1] == '\0') ? ops[4].f : NULL);
}
