#include "lists.h"
#include <string.h>
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer the head of the listint_t list.
 * @n: The integer to be added to the list_t list.
 * Return: If the function fails - NULL.
 * Otherwise - the address of the newnode element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *end;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = newnode;
	}
	return (*head);
}
