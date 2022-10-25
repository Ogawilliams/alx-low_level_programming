#include "lists.h"

/**
 * get_nodeint_at_index - returns the data of the node at index 'index'
 *
 * @head: the head of the list
 * @index: the position of the node in the list
 * Return: the item's data
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	tmp = head;

	while (n < index && tmp)
	{
		tmp = tmp->next;
		n++;
	}

	if (n < index) /* if item not found but whole list has been traversed */
		return (NULL);

	return (tmp);
}
