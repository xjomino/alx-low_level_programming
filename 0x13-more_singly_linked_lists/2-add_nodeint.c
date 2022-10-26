#include <string.h>
#include "lists.h"
/**
 * add_nodeint - prints all the elements of a listint_t
 * @head: double pointer to list_t list
 * @n: new integer to add in the node
 * Return: address of new element,NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
