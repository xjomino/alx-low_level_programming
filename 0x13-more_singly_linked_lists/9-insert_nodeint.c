#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to head
 * @idx: insert node at this index, starting count at 0
 * @n: value to store in node
 * Return: Address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
		listint_t *newnode;
		listint_t *tmp;

		unsigned int k;

		if (head == NULL)
			return (NULL);
		tmp = *head;
		for (k = 1; tmp && k < idx; k++)
		{
			tmp = tmp->next;
			if (tmp == NULL)
				return (NULL);
		}
		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->n = n;
		if (idx == 0)
		{
			*head = newnode;
			newnode->next = tmp;
		}
		else if (tmp->next)
		{
			newnode->next = tmp->next;
			tmp->next = newnode;
		}
		else
		{
			newnode->next = NULL;
			tmp->next = newnode;
		}
		return (newnode);
}

