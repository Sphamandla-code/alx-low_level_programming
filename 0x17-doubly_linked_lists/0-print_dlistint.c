#include "lists.h"

/**
 * print_dlistint - elements of dlistint
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint *h)
{

	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
