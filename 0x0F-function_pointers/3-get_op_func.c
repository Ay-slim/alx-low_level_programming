#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - Get op func
 * @s: Op string
 * Return: Pointer to op function
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
	int i;

	if (!s)
		return (NULL);
	while (i < 5)
	{
		if (ops[i].op == s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
