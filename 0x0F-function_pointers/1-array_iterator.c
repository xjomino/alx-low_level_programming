#include "function_pointers.h"
/**
 * array_iterator - that executes a function given
 * as a parameter on each element of an array
 * @array: array of ints
 * @size: size of array
 * @action: pointer to the action function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t k;

	if (!array || !action)
		return;
	for (k = 0; k < size; k++)
		action(array[k]);
}
