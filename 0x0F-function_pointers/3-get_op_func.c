#include ""3-calc.h
/**
 * get_op_func - select correct operation
 * @s: operator arg
 * Return: function pointer given as parameter
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
	int k;

	k = 0

	while (ops[k].op)
	{
		if (ops[k].op[0] == s[0])
			return (ops[k].f);
		k++;
	}
	return (NULL);
}
