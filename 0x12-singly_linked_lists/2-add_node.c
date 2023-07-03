#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *add_node - pointer to list
 *@head : double pointer to list
 *@str: string to be reciplicated
 *
 *Return: memory addres of new string
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNOde =(list_t*)malloc(sizeof(list_t));


	if(newNOde == NULL)
	{
		return (NULL);
	}
	newNOde->str = strdup(str);
	if(newNOde->str == NULL)
	{
		free(newNOde);
		return (NULL);
	}
	newNOde->next = NULL;
	if(*head == NULL)
	{
		*head = newNOde;
	}
	else
	{
		newNOde->next = *head;
		*head = newNOde;
	}
	return (newNOde);
}
