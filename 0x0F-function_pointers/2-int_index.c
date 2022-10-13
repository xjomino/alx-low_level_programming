#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array of ints
 * @size: size of array
 * @cmp: pointer function
 * Return: the index of the first element for
 * which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}
