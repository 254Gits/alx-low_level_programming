#include "lists.h"
/**
 * sum_listint-  sum return of n
 * @head: node pointer
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
