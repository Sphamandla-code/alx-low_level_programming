#include "lists.h"

/**
 * list_len - num of elements in list
 * @h: param1
 * Return: num
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
