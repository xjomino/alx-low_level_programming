#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint-function that returns the
 * sum of all the data (n) of a listint_t linked list.
 * @head: A pointer to the list_t list
 * Return: sum of all int.
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum;

	sum = 0;
	for (tmp = head ; tmp != NULL; tmp = tmp->next)
		sum += tmp->n;

	return (sum);
}
