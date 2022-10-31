#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;
	unsigned int rem;

	if (index > 64)
		return (-1);
	rem = index;
	for (k = 1; rem > 0; k *= 2, rem--)
		;
	if ((*n >> index) & 1)
		*n -= k;

	return (1);
}
