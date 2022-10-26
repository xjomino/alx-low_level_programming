#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a list_t
 * @h: pointer to list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}
	return (k);
}
