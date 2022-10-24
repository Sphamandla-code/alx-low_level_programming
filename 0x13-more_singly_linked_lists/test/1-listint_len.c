#include "lists.h"

/**
 * listint_len - num of elements
 * @h: list head
 * Return: number
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
