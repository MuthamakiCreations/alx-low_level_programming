#include "lists.h"

/**
 * sum_dlistint - Represents teh sum of the data in the linked list.
 *
 * @head: Represents the head.
 *
 * Return: The total count of the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
