#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to head
 * @index: delete  node at this index, starting count at 0
 * Return: 1 if success -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
		listint_t *tmp = *head;
		listint_t *rem = NULL;

		unsigned int k = 0;

		if (*head == NULL)
			return (-1);
		if (index == 0)
		{
			*head = (*head)->next;
			free(tmp);
			return (1);
		}
		while (k < index - 1)
		{
			if (!tmp || !(tmp->next))
				return (-1);
			tmp = tmp->next;
			k++;
		}
		rem = tmp->next;
		tmp->next = rem->next;
		free(rem);
		return (1);
}

