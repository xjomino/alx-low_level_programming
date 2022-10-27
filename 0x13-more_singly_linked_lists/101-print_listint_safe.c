#include "lists.h"
#include <stdio.h>

/**
 *  * print_listint_safe - Print a `listint_t` linked list including mem addresses
 *   * @head: head of linked list
 *    * Description: Go through the list only once.
 *     * Return: number of nodes in list. If fails, exit with status 98.
 *      */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp;
	size_t k;
	const listint_t *rem;

	tmp = head;
	if (tmp == NULL)
		exit(98);

	k = 0;
	while (tmp != NULL)
	{
		rem = tmp;
		tmp = tmp->next;
		k++;
		printf("[%p] %d\n", (void *)rem, rem->n);

		if (rem < tmp)
		{
			printf("-> [%p] %d\n", (void *)tmp, tmp->n);
			break;
		}
	}

	return (k);
}
