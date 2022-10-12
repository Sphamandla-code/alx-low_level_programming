#include "function_pointer,h"

/**
 * array_iterator - function on arr element
 * @array: arr
 * @size: arr size
 * @cmp: pointer
 */
void array_iterator(int *array, int size, int (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}