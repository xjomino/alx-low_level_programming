#include <stdio.h>
/**
 * main - prints the first 50 fibonacci
 * numbrs starting with 1 and 2
 * Return: Always 0 (success)
 */
int main(void)
{
	long int a, b, k, results;

	a = 1;
	b = 2;
	results = 0;

	for (k = 1; k <= 50; k++)
	{
		printf("%ld, ", a);
		results = a + b;
		a = b;
		b = results;
	}
	printf("\n");
}

