#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals
 * @a: a square array
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int k;
	unsigned int add1;
	unsigned int add2;

	add1 = 0;
	add2 = 0;

	for (k = 0; k < size; k++)
	{
		add1 += a[(size * k) + 1];
		add2 += a[(size * (k + 1)) - (k + 1)];
	}
	printf("%d, %d\n", add1, add2);
}
