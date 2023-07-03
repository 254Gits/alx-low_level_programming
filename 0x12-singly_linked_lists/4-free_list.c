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
	list_t *freelists = head;
	list_t *next;

while (freelists != NULL)
{
	next = freelists->next;
	free(freelists -> str);
	free(freelists);

	freelists = next;
}
}
