#include "function_pointers.h"
/**
 * print_name -print a name from a function pointer
 * @name: char string
 * @f: function pointer that has a string arg
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
