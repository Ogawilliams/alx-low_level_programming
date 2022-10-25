#include "lists.h"

/**
 * print_listint - prints the nodes in a listint object to screen
 *
 * @h: the object to be printed
 * Return: the number of nodes in the listint object
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
