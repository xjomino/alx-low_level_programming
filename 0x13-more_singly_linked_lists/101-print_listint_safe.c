#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints a linked list, safe
 * @head: list of type listint_t to print
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t k;
	long int rem;

	while (head)
	{
		rem = head - head->next;
		k++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (rem > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (k);
}
