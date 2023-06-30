#include "lists.h"

#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - entry point
 * @list_t *h : header
 * @h: pointer head
 *
 *
 *Return:  length of elements
 */

size_t list_len(const list_t *h)
{
	size_t r = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			return (r);
		}
		r++;
		h = h->next;
	}
	return (r);
}
