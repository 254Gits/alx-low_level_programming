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
if (head == NULL)
{
	free(head);
}
}
