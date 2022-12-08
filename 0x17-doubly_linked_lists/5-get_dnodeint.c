#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked listd
 * @head: head of the list
 * @index: index of the node starting from 0
 * Return: the nth node of a list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;

	}
	return (head);
}
