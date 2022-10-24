#include "lists.h"

/**
 * sum_listint - sum all data
 * @head: head list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *cursor = head;
	size_t sum = 0;

	while (cursor != NULL)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
