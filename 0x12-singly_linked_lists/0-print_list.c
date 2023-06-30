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
	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
		return (h->len);

	}
	return (0);
}
