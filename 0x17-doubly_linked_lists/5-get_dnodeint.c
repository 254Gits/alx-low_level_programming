#include "lists.h"
/**
 *get_dnodeint_at_index - gets the nth node of a list
 *@head: pointer to the list
 *@index: index of the node to return
 *
 * Return: address of the node NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; head && i < index; i++)
	{
		head = head->next;
	}

	return (head ? head : NULL);
}
