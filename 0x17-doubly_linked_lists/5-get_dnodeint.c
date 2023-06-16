#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at a given index.
 *
 * @head: Represnts the head.
 * @index: Represnts the index of the new node.
 *
 * Return: NULL if node is missing and if otherwise print address.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
