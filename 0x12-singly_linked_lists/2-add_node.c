#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: The fist node in a list_t list.
 * @str: the string to be used to create a new node
 * Return: The added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;

	*head = new;

	return (new);
}

/**
 * _strlen - calcualtes the length of a string
 *
 * @str: pointer to the string to be calculated
 * Return: length of the string
 */
int _strlen(const char *str)
{
	int i = 0;

	while (*str++)
		i++;

	return (i);
}
