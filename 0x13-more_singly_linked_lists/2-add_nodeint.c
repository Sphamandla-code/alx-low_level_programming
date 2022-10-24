#include "lists.h"

/**
 * add_nodeint - add node beginning
 * @head: head of node
 * @n: int to add
 * Return: address or null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node-next = *head;

	*head = n_node;

	return (n_node);
}
