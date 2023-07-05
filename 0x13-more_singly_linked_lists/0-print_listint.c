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

	while (h != NULL)
	{
		printf("%i \n", h->n);
		h = h->next;
		newcount++;
	}

	return (newcount);
}
