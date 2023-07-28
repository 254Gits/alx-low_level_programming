#include "lists.h"
/**
 * insert_nodeint_at_index- new node inserter
 * @n: place value code
 * @idx: where the code is at
 * @head: first node pointer
 *
 * Return: next index pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		listint_t *current = *head;

		while (--idx > 0 && current != NULL)
			current = current->next;

		if (idx > 0)
		{
			free(new);
			return (NULL);
		}
		new->next = current->next;
		current->next = new;
	}
	return (new);
}
