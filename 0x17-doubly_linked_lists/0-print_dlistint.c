#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: pointer to the list
 * Return: number of nodes in the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
