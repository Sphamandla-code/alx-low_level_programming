#include "main.h"

/**
 * malloc_checked - use malloc
 * @b: bytes
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
