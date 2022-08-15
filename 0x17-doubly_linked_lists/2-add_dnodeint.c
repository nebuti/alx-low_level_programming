#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: double pointer to the linked list
 * @n: data to insert in the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;

	newNode->next = *head;
	newNode->prev = NULL;

	if (*head)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
