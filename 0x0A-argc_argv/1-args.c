#include "main.h"
#include <stdio.h>
/**
 * main - print the name of the progarm
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv[]);
	return (0);
}
