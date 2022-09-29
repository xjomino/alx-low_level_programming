#include "main.h"
/**
 * is_palindrome - checks if astring
 * is the  same in reverse
 * @s: sring to be checked
 * Return:1 if the string is a palindrome
 * otherwise return 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (test_is_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - counts lenth of the string
 * @s: string to count
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(1 + s) + 1);
}
/**
 * test_is_pal -recursively checks for
 * reverse order
 * @s: string
 * @k: length of string
 * @j: checker
 * Return: 1 if palindrome 0 if not
 */
int test_is_pal(char *s, int j, int k)
{
	if (*(s + j) != *(s + k - 1))
		return (0);
	if (j >= k)
		return (1);
	return (test_is_pal(s, j + 1, k - 1));
}
