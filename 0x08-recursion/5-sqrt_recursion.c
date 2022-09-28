#include "main.h"
/**
 * _sqrt_recursion -returns the
 * natural square root of a number
 * @n: int number
 * Return:If no natural square root, return -1.
 * Else return natural sqaureroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (test_sqrt_recursion(n, 0));
}

/**
 * test_sqrt_recursion - recurse
 * to find natural sqrt
 * @n: in to be sqrted
 * @y: test output
 * Return: sqrt of a number
 */
int test_sqrt_recursion(int n, int y)
{
	if (y * y > n)
		return (-1);
	if (y * y == n)
		return (y);

	return (test_sqrt_recursion(n, y + 1));
}
