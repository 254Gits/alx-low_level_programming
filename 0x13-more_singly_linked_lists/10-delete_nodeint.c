#include "lists.h"
/**
 * delete_nodeint_at_index - poniter to head
 * @index: index of node
 * @head: double pointer
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *next;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;

	for (; i < index - 1; i++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	next = current->next;

	if (next == NULL)
	{
	return (-1);
	}
	current->next = next->next;
	free(next);
	return (1);
}

