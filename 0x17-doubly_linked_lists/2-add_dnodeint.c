#include "lists.h"

/**
 *add_dnodeint - adds a new node at the beginning of a doubly linked list
 *@head: double pointer to the list
 *@n: data to insert in the new node
 *
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head)
		return (NULL);

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
