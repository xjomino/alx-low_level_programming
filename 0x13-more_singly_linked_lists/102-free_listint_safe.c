#include "lists.h"
/**
 * free_listint_safe - free a `listint_t` list and set the head to null
 * @h: double pointer to head of linked list
 * Description: This function should work for circular lists
 * Only loop through the list once
 * Return: size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *rem;
	size_t k;

	k = 0;
	tmp = *h;
	while (tmp != NULL)
	{
		k++;
		rem = tmp;
		tmp = tmp->next;
		free(rem);

		if (rem < tmp)
			break;
	}
	*h = NULL;

	return (k);
}
