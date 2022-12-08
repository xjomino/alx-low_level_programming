#include "lists.h"
/**
 * free_dlistint - frees linked dlistint_t list
 * @head: head of dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *mem;

	while (head)
	{
		mem = head->next;
		free(head);
		head = mem;
	}
}
