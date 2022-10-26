#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint- function that deletes
 * the head node of a listint_t.
 * @head: A pointer to the list_t list
 * The function sets the head to NULL.
 * if the linked list is empty return 0
 * Return: the data inside the elements
 * that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int number;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	number = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (number);
}
