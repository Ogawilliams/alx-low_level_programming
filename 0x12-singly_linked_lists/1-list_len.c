#include "lists.h"
#include <stdio.h>

/**
 * list_len - calculates the number of nodes in a list_t object.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
