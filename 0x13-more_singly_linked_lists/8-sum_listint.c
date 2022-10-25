#include "lists.h"

/**
 * sum_listint - sums the data in a listint_t object
 *
 * @head: the object to be printed
 * Return: the sum of the data in the object
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
