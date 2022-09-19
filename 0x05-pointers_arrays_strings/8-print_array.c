#include "main.h"
#include <stdio.h>
/**
 *print_array - prints n elements of an
 *integer
 *followed by a new line
 * @a: int type array pointer
 * @n: int type integer
 */
void print_array(int *a, int n)
{
	int k;

	k = 0;
	for (n--; n >= 0; n--, k++)
	{
		printf("%d", a[k]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
