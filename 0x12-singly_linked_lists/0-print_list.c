#include "lists.h"

/**
 * print_list - print list
 * @h: param
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len,
		current->str != NULL ? current->str : "(nil)");
		current = current->next;
		nodes++;
	}
	return (nodes);
}

