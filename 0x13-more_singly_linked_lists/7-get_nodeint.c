#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index- function that returns
 * the nth node of a listint_t linked list.
 * @head: A pointer to the list_t list
 * @index:index of the node, starting at 0
 * if the node does not exist, return NULL
 * Return: pointer to node being sort.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int k;

	tmp = head;
	k = 0;
	while (k < index)
	{
		if (tmp)
			tmp = tmp->next;
		else
			return (NULL);
		k++;
	}
	if (tmp)
		return (tmp);
	else
		return (NULL);
}
