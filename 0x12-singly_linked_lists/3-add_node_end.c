#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: If the function fails - NULL.
 * Otherwise - the address of the newnode element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;

	list_t *newnode, *end;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	dup = strdup(str);
	if (str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	newnode->str = dup;
	newnode->len = len;
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
