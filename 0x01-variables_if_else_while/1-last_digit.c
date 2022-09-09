#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 * printing random numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;
	int k;

	srand(time(0));
	b = rand() - RAND_MAX / 2;
	k = b % 10;

	if (k > 5)
		printf("Last digit of %i is %i and is greater than 5\n", b, k);
	else if (k == 0)
		printf("Last digit of %i is %i and is 0\n", b, k);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", b, k);
	return (0);
}
