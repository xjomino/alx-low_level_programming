#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the multiplication
 * of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
