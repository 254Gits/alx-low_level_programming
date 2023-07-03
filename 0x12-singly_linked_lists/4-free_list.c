#include "lists.h"
#include <stdlib.h>

/**
 *free_list- list pointer entry
 *@head : pointer to list
 *
 *
 *Return: nothing
 */

void free_list(list_t *head)
{
	list_t *freelist = head;
	list_t *now;

while (head != NULL)
{
	now = freelist->now;
	free(freelist -> str);
	free(freelist);

	current = freelist;
}
}
