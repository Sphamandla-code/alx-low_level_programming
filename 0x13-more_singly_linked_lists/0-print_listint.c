#include "lists.h"

/**
 * print_listint - print elements off list
 * @h: list head
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
