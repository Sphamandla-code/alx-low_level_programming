#include "lists.h"

/**
 * print_listint - print elements off list
 * @h: list head
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count++;
		cursor = cursor->next;
	}
	return (count);
}
