#include "variadic_functions.h"
/**
 * print_strings - print numbers
 * @n: number of strings passedi
 * @separator: string to be printed between string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	char *stg;

	va_list list;

	va_start(list, n);

	for (k = 0; k < n; k++)
	{
		stg = va_arg(list, char *);
		if (!stg)
			stg = "(nil)";
		if (!separator)
			printf("%s", stg);
		else if (separator && k == 0)
			printf("%s", stg);
		else
			printf("%s%s", separator, stg);
	}
	va_end(list);
	printf("\n");

}
