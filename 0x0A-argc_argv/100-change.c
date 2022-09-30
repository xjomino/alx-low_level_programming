#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number
 * of coins to
 * make change for an amount of money
 * @argc: argument count
 * @argv: argument array strings.
 * Return: 1 if error, 0 if function runs.
 */
int main(int argc, char *argv[])
{
	int outcome, k;
	int coins[] = {25, 10, 5, 2, 1};
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	outcome = 0;

	if (num < 1)
	{
		printf("0\n");
		return (0);
	}
	for (k = 0; k < 5 && num >= 0; k++)
	{
		while (num >= coins[k])
		{
			outcome++;
			num -= coins[k];
		}
	}
	printf("%d\n", outcome);
	return (0);
}
