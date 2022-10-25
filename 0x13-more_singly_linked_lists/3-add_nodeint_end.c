#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a listint_t list
 *
 * @head: the first item in the list
 * @n: the integer used to create the node
 * Return: the newly created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
