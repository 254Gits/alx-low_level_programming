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
	size_t newcount = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			newcount++;
			h = h->next;
		}
	}

	return (newcount);
}
