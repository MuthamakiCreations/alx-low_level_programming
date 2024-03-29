#include "lists.h"

/**
 * add_dnodeint_end - A new node is added.
 *
 * @head: Represents the node's head.
 * @n: Represnets the new node.
 *
 * Return: New pointer if success and NULL if otherwise.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;

		return (new);
	}

	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = new;
	new->prev = end;

	return (new);
}
