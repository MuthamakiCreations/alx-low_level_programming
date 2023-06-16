#include "lists.h"

/**
 * add_dnodeint - Adds a new node.
 *
 * @head: Represents the head.
 * @n: Represents the new node.
 *
 * Return: New pointer if success and NULL if otherwise.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new =  malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
