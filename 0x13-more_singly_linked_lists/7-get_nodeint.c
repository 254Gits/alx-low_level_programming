#include "lists.h"
/**
 * get_nodeint_at_index- nth node
 * @head: first node
 * @index: position of idex
 *
 * Return: NULL if node is empty
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < index; j++)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
	}
	return (head);
}
