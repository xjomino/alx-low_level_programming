#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a newnode  at a given position
 * @h: A pointer to the head of the dlistint_t list
 * @idx: idx is the index of the list where the newnode  should be added
 * Index starts at 0
 * @n: integer for the newnode to contain
 * Return: the address of the newnode, or NULL if it failed
 * if it is not possible to add the newnode at index idx,
 * do not add the newnode  and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *mem = *h, *newnode;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		mem = mem->next;
		if (mem == NULL)
			return (NULL);
	}
	if (mem->next == NULL)
		return (add_dnodeint_end(h, n));
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = mem;
	newnode->next = mem->next;
	mem->next->prev = newnode;
	mem->next = newnode;
	return (newnode);
}
