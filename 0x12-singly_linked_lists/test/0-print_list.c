#include "lists.h"

/**
 * print_list - elements of lists_t
 * @h: param1
 * Return: num of node
 */

size_t print_list(const list_t *h)
{
const list_t *cursor = h;
size_t count = 0;

while (cursor != NULL)
{
    if (cursor->str != NULL)
        printf("[%d] %s\n", cursor->len, cursor->str);
    else
        printf("[0] (nil)\n");
    count++;
    cursor = cursor->next;
}

return (count);
}