#include "lists.h"

/**
 * dlistint_len - calculates the length of the dlistint_t.
 *
 * @h: Represnts the head of the dlistint_t.
 *
 * Return: The total count of the elements in the dlistint_t.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
