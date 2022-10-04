#include "main.h"
#include <stdlib.h>
/**
 * create_array -creates an array of chars
 * and initializes it with a specific char.
 * @size: size of array to create
 * @c: char ti initialize the c array
 * Return: NULL if size = 0,a pointer
 * to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int k = 0;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (0);
	}
	while (k < size)
	{
		*(ptr + k) = c;
		k++;
	}
	*(ptr + k) = '\0';
	return (ptr);
}

