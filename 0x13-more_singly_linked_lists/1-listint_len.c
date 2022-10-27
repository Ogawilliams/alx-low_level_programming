#include "lists.h"

/**
 * listint_len - determines the number of nodes in a listint object
 *
 * @h: the listint object
 * Return: the number of nodes in the listint object
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
