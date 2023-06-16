#include "lists.h"

/**
 * delete_dnodeint_at_index - Used to delete the node at the linked-list's index.
 *
 * @head: Represnts the head of the linked-list.
 * @index: Reprents the index to be deleted.
 *
 * Return: If success return 1, and -1 if otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);

	return (1);
}
