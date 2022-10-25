#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t
 * @h: pointer to list
 * If str is NULL, print [0] (nil)
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		k++;
	}
	return (k);
}
