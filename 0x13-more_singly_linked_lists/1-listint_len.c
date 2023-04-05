#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: Pointer.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *mdk;
	unsigned int num = 0;

	mdk = h;
	while (mdk)
	{
		cnr++;
		mdk = mdk->next;
	}
	return (num);
}

