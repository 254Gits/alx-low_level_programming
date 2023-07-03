#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *add_node_end- pointer to list
 *
 *@head :double pointer
 *@str : string pointer
 *
 *Return: index of replicated list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newCOde = (list_t *)malloc(sizeof(list_t));

	if (newCOde == NULL)
	{
		return (NULL);
	}

	newCOde->str = strdup(str);

	if (newCOde->str == NULL)
	{
		free(newCOde);
		return (NULL);
	}

	newCOde->len = strlen(str);
	newCOde->next = NULL;

	if (*head == NULL)
	{
		*head = newCOde;
	}
	else
	{
		list_t *luchi = *head;

		for (; luchi->next != NULL; luchi = luchi->next)
		{
		}
		luchi->next = newCOde;
	}
	return (newCOde);
}
