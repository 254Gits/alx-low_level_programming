#include "lists.h"
/**
 *add_nodeint- list entry point
 *@head : double pointer
 *@n : stores member variable
 *
 *Return: newnode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;

		return (newNode);

	}
}
