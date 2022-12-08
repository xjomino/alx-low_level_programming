#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: Pointer to the head of the list
 * @n: The integer for new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *last_node = *head;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
		return (newnode);
	}
	else
	{
		while (last_node->next)
		{
			last_node = last_node->next;
		}
		last_node->next = newnode;
		newnode->prev = last_node;
	}
	return (newnode);
}
