#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at index
 *
 * @head: the first node in the list
 * @idx: position to insert new node
 * @n: data used to create new node
 * Return: the newly created node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *next, *tmp, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL || *head == NULL)
		return (NULL);

	if (idx == 0)
	{
		free(new);
		return (add_nodeint(head, n));
	}

	tmp = *head;

	while (i < (idx - 1) && tmp)
	{
		tmp = tmp->next;
		i++;
	}

	if (i < (idx  - 1))
	{
		free(new);
		return (NULL);
	}

	next = tmp->next;
	tmp->next = new;
	new->next = next;

	return (new);
}
