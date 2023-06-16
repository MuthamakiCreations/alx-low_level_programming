#include "lists.h"

/**
 * free_dlistint - A linked list is freed.
 *
 * @head: Represents the head.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
