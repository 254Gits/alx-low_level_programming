#include "lists.h"
/**
 *  free_listint - frees list
 *  @head: node to be freed
 *  Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
