#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: head of list
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *popped;
	int content;

	if (*head == NULL)
		return (0);

	popped = *head;
	content = popped->n;
	free(popped);

	*head = (*head)->next;

	return (content);
}
