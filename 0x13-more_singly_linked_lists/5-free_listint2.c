#include "lists.h"
/**
 * free_listint2 - head node to be checked
 * @head : node to be freed
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
