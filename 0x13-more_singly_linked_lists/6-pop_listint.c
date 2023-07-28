#include "lists.h"
/**
 * pop_listint- node function
 * @head: deleting node
 *
 * Return: 0 if the string is empty
 */

int pop_listint(listint_t **head)
{
	 int n = (*head)->n;
	 listint_t *temp = *head;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	*head = (*head)->next;
	free(temp);

	return (n);
}
