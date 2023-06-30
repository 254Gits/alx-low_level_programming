#include <stdio.h>

#include "lists.h"

/**
 * print_list - entry point
 * @list_t *h : pointer to head
 *@h :header
 * Return: Nothing
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		i++;
	}
	return (i);
}
