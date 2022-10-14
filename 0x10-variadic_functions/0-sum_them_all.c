#include "variadic_functions.h"
/**
 * sum_them_all - gets sum of all its parameters.
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int k;
	va_list list;
	int sum;

	va_start(list, n);
	if (n == 0)
		return (0);
	for (k = 0; k < n; k++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);

}
