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

	srand(time(0));
	b = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", b, b % 10);
	if (b % 10 > 5)
		printf("and is greater than 5\n");
	else if (b % 10 == 0)
		printf("and is 0\n");
	else if (b % 10 < 6 && b % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
