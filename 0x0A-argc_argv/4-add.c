#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add arguments
 * @argc: argument count
 * @argv: argument array strings.
 * Return: 1 if error, 0 if function runs properly.
 */
int main(int argc, char *argv[])
{
	int sum, k;
	char *x;
	int num;

	sum = 0;
	if (argc > 1)
	{
		for (k = 1; argv[k]; k++)
		{
			num = strtol(argv[k], &x, 10);
			if (!*x)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
