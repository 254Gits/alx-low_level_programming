#include "lists.h"
/**
 * pop_listint- node function
 * @head: deleting node
 *
 * Return: 0 if the string is empty
 */

int pop_listint(listint_t **head)
{
	 listint_t *temp;
	 int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
