#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - Frees a list_t list.
 * @head: A pointer to the list_t list
 * The function sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
