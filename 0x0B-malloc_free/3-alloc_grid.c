#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: of matrix
 * @height: of matrix
 * Return: pointer to created matrix
 */
int **alloc_grid(int width, int height)
{
	int **mat;
	int k, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	mat = (int **) malloc(sizeof(int *) * height);
	if (mat == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		mat[k] = (int *) malloc(sizeof(int) * width);
		if (mat[k] == NULL)
		{
			free(mat);
			for (j = 0; j <= k; j++)
				free(mat[j]);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (j = 0; j < width; j++)
		{
			mat[k][j] = 0;
		}
	}
	return (mat);
}

