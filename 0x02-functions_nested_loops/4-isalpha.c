#include "main.h"
/**
 * _isalpha -checks for alphabets
 * @c: the character being checked
 *
 * Return: 1 if c is letter, if not 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
