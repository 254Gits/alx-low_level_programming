#include "lists.h"

/**
 *free_dlistint - frees a doubly linked list
 *@head: pointer to the list to free
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	for (; head != NULL; head = temp)
	{
		temp = head->next;
		free(head);
	}
}
