#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * of a dlistint_t linked list
 * @head: A pointer to the head of the dlistint_t.
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *mem = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (mem == NULL)
			return (-1);
		mem = mem->next;
	}
	if (mem == *head)
	{
		*head = mem->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		mem->prev->next = mem->next;
		if (mem->next != NULL)
			mem->next->prev = mem->prev;
	}
	free(mem);
	return (1);
}
