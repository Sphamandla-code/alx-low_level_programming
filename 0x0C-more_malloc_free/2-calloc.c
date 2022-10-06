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

	m = calloc(nmemb, size);

	return (m);
}
