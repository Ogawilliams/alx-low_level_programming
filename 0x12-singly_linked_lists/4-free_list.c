#include "lists.h"

/**
 * free_list - frees the memory used by a list_t object
 *
 * @head: the first item in the list_t object
 */
void free_list(list_t *head)
{
	list_t *next, *current;

	current = head;

	if (head == NULL)
		return;

	do {
		free(current->str);
		next = current->next;
		free(current);
		current = next;
	} while (next != NULL);
}
