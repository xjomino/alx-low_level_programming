#include "stdio.h"
/**
 *main - computes and prints the sum of
 *all multiples of 3 and 5 below 1024
 *Return: Always 0 (success)
 */
int main(void)
{
	int add3, add5, add35;
	int k;

	add3 = 0;
	add5 = 0;
	add35 = 0;
	for (k = 0; k < 1024; k++)
	{
		if ((k % 3) == 0)
		{
			add3 = add3 + k;
		} else if ((k % 5) == 0)
		{
			add5 = add5 + k;
		}
	}
	add35 = add3 + add5;
	printf("%d\n", add35);
	return (0);
}


