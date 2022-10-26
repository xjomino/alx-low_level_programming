#include "lists.h"
/**
 * listint_len - prints all the elements of a list_t
 * @h: pointer to list
 * Return: elements linked
 */
size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		h = h->next;
		k++;
	}
	return (k);
}
