#include "lists.h"
/**
 * print_dlistint -prints all the elements of a dlistint_t list
 * @h: node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t no_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		no_nodes++;
		h = h->next;
	}
	return (no_nodes);
}
