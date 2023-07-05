#ifndef HUY_u
#define HUY_u
/**
 *struct listint_s - singly linked list
 *@n: integer
 *@next: points to the next node
 *
 *Description: singly linked list node structure
 *
 */
#include <stdio.h>
#include <stddef.h>
typedef struct listint_s
{
	int n;
	struct listint_s *next;
}listint_t;
size_t print_listint(const listint_t *h);
#endif
