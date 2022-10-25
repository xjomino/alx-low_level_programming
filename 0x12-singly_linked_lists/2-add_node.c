#include <string.h>
#include "lists.h"
/**
 * add_node - prints all the elements of a list_t
 * @head: double pointer to list_t list
 * @str: new string to add in the node
 * Return: address of new element,NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(newnode);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	newnode->str = dup;
	newnode->len = len;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
