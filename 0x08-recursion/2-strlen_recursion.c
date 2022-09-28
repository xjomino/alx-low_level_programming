#include "main.h"
/**
 * _strlen_recursion - counts length of string
 *
 * @s: string to count
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(1 + s) + 1);
}
