#include "main.h"
/**
 * is_prime_number -returns returns 1
 * if the input integer is a prime number
 * @n: int number to be checked
 * Return:1 if the input integer is a
 * prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (test_is_prime_number(n, n - 1));
}

/**
 * test_is_prime_number - test to check
 * if its a prime number or not
 * @n: in to be checked
 * @y: test output
 * Return: 1 if its a prime
 */
int test_is_prime_number(int n, int y)
{
	if (y == 1)
		return (1);
	if (n % y == 0 && y > 0)
		return (0);
	return (test_is_prime_number(n, y - 1));
}
