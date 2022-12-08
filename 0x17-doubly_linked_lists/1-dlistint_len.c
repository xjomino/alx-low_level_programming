#include "lists.h"
/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t no_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		no_nodes++;
	}
	return (no_nodes);
}
