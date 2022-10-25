#include "lists.h"

/**
 * pop_listint - removes the first item in a list and returns the item's data
 *
 * @head: the head of the list
 * Return: the item's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;

	n = tmp->n;

	free(tmp);

	return (n);
}
