#include "lists.h"
/**
 *print_listint- entry point
 *@h : pointer to list
 *
 *
 *
 *
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *oldnode = h;
	size_t newcount = 0;

	while (oldnode != NULL)
	{
		printf("%i \n", oldnode->n);
		oldnode = oldnode->next;
		newcount++;
	}

	return (newcount);
}
