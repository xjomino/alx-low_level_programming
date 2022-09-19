#include "main.h"
/**
 * swap_int - to swap pointer variable values
 * @a:pointer to the first integer
 * @b:pointer to the
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
