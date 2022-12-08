#include "lists.h"

/**
 * get_dnodeint_at_index - add nth node of list.
 * @head: pointer to head
 * @index: index of node to return
 *
 * Return: NULL or 0;
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
