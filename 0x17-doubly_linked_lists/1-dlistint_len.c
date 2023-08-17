#include "lists.h"

/**
 *dlistint_len - returns the number of nodes in a doubly linked list
 *@h: pointer to the list
 *
 *Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t ndes = 0;

	for (; h != NULL; h = h->next)
		ndes++;

	return (ndes);
}
