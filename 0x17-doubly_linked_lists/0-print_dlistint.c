#include "lists.h"
/**
 * print_dlistint - double linked list
 * @h: pointer to list
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t ndes = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		ndes++;
	}
	return (ndes);
}
