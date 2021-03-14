#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct operation
 *
 * @s: operation to perform
 *
 * Return: pointer to the correct function
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
	int num = 0;

	while (ops[num].op != NULL)
	{
		if (strcmp(s, ops[num].op) == 0)
			break;
		num++;
	}
	return (ops[num].f);
}
