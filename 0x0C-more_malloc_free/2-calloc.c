#include "main.h"

/**
 * _calloc - Allocates memory for array
 * @nmemb: param1
 * @size: param1
 * Return: null or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = calloc(nmemb, size);

	if (m == NULL)
		return (NULL);

	return (m);
}
